/*
** EPITECH PROJECT, 2024
** Kill my duck !
** File description:
** event for despawn my sprite
*/

#include <stdlib.h>
#include "../../include/struct.h"
#include "../../include/my.h"

int click_event_sprite(sf_struct_t *sf)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        sf->mouse = sfRenderWindow_mapPixelToCoords
            (sf->window, sfMouse_getPositionRenderWindow(sf->window), NULL);
        sf->bounds = sfSprite_getGlobalBounds(sf->duck_sprite);
        if (sfFloatRect_contains(&sf->bounds, sf->mouse.x, sf->mouse.y))
            my_printf("Ta tué un canard");
    }
    return EXIT_SUCCESS;
}
