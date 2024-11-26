/*
** EPITECH PROJECT, 2024
** Kill my duck !
** File description:
** event for despawn my sprite
*/


#include <stdlib.h>
#include "../../include/struct.h"
#include "../../include/my.h"

int check_pos(sf_struct_t *sf)
{
    sf->position = sfSprite_getPosition(sf->duck_sprite);
    if (sf->position.y <= 50) {
        sf->position.y = (100 + rand() % 101);
        sfSprite_setPosition(sf->duck_sprite, sf->position);
    }
    if (sf->position.y >= 905) {
        sf->position.y = (800 + rand() % 101);
        sfSprite_setPosition(sf->duck_sprite, sf->position);
    }
    return EXIT_SUCCESS;
}

int click_event_sprite(sf_struct_t *sf)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        sf->mouse = sfRenderWindow_mapPixelToCoords
            (sf->window, sfMouse_getPositionRenderWindow(sf->window), NULL);
        sf->bounds = sfSprite_getGlobalBounds(sf->duck_sprite);
        if (sfFloatRect_contains(&sf->bounds, sf->mouse.x, sf->mouse.y)) {
            sf->position.x = -200;
            sf->position.y = rand() % (1000 + 1);
            sfSprite_setPosition(sf->duck_sprite, sf->position);
            check_pos(sf);
        }
    }
    return EXIT_SUCCESS;
}
