/*
** EPITECH PROJECT, 2024
** My Hunter
** File description:
** First Game in csfml !
*/

#include <stdlib.h>
#include "./include/my.h"
#include "./include/struct.h"

void cleanup_resources(sf_struct_t *sf)
{
    sfClock_destroy(sf->clock);
    sfText_destroy(sf->text);
    sfFont_destroy(sf->font);
    sfMusic_destroy(sf->music);
    sfSprite_destroy(sf->duck_sprite);
    sfTexture_destroy(sf->duck_texture);
    sfSprite_destroy(sf->background_sprite);
    sfTexture_destroy(sf->background_texture);
    sfRenderWindow_destroy(sf->window);
}
