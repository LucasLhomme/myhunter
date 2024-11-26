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
    if (sf->position.y > 700) {
        my_printf("+800");
        sf->position.y = 585;
        sfSprite_setPosition(sf->duck_sprite, sf->position);
    }
    if (sf->position.y < 200) {
        sf->position.y = 180;
        my_printf("-50");
        sfSprite_setPosition(sf->duck_sprite, sf->position);
    }
    return EXIT_SUCCESS;
}

void print_click_position(sf_struct_t *sf)
{
    sfVector2i pixelPos = sfMouse_getPositionRenderWindow(sf->window);
    sfVector2f worldPos = sfRenderWindow_mapPixelToCoords(sf->window, pixelPos, NULL);
    printf("Click position: x = %f, y = %f\n", worldPos.x, worldPos.y);
}
int click_event_sprite(sf_struct_t *sf)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        print_click_position(sf);
        sf->mouse = sfRenderWindow_mapPixelToCoords
            (sf->window, sfMouse_getPositionRenderWindow(sf->window), NULL);
        sf->bounds = sfSprite_getGlobalBounds(sf->duck_sprite);
        if (sfFloatRect_contains(&sf->bounds, sf->mouse.x, sf->mouse.y)) {
            sf->position.x = -200;
            sf->position.y = rand() % (1000 + 1);
            sfSprite_setPosition(sf->duck_sprite, sf->position);
            check_pos(sf);
            my_printf("Ta tué un canard");
        }
    }
    return EXIT_SUCCESS;
}
