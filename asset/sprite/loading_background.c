/*
** EPITECH PROJECT, 2024
** Background asset
** File description:
** Load my background asset
*/

#include "../../include/struct.h"
#include "../../include/my.h"

int initialize_sprite_backgrount(sf_struct_t *sf)
{
    sf->background_sprite = sfSprite_create();
    if (!sf->background_sprite)
        return EXIT_FAILURE;
    sf->background_texture = sfTexture_createFromFile
        ("./asset/sprite/background.png", NULL);
    if (!sf->background_texture) {
        sfSprite_destroy(sf->background_sprite);
        return EXIT_FAILURE;
    }
    sfSprite_setTexture(sf->background_sprite, sf->background_texture, sfTrue);
    return EXIT_SUCCESS;
}
