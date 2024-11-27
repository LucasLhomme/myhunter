/*
** EPITECH PROJECT, 2024
** Script for move my sprite
** File description:
** this script move my sprite
*/

#include <stdlib.h>
#include "../../include/struct.h"
#include "../../include/my.h"

int move_duck(sf_struct_t *sf)
{
    sfVector2f position = sfSprite_getPosition(sf->duck_sprite);

    sf->speed = (sfVector2f) {250, 100};
    if (sf->clock != NULL) {
        position.x += sf->speed.x
            * sfTime_asSeconds(sfClock_getElapsedTime(sf->clock));
    }
    if (position.x >= 1300) {
        position.x = -200;
        position.y = rand() % (1000 + 1);
        sfSprite_setPosition(sf->duck_sprite, sf->position);
        check_pos(sf);
    }
    sf->clock = sfClock_create();
    sfSprite_setPosition(sf->duck_sprite, position);
    sfClock_restart(sf->clock);
    return EXIT_SUCCESS;
}
