/*
** EPITECH PROJECT, 2024
** Initialize sprite
** File description:
** load my sprite
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include "../../include/struct.h"
#include "../../include/my.h"


int initialize_sprite_duck(sf_struct_t *sf)
{
    sf->area = (sfIntRect) {0, 0, 110, 95};
    sf->scale = (sfVector2f) {0.7, 0.7};
    sf->duck_sprite = sfSprite_create();
    if (!sf->duck_sprite)
        return EXIT_FAILURE;
    sf->duck_texture = sfTexture_createFromFile("./asset/sprite/duck.jpg"
        , NULL);
    if (!sf->duck_texture) {
        sfSprite_destroy(sf->duck_sprite);
        return EXIT_FAILURE;
    }
    sfSprite_setTexture(sf->duck_sprite, sf->duck_texture, sfTrue);
    sfSprite_setTextureRect(sf->duck_sprite, sf->area);
    sfSprite_setScale(sf->duck_sprite, sf->scale);
    return EXIT_SUCCESS;
}

void animate_sprite_duck(sf_struct_t *sf, int frame_count)
{
    sfIntRect area = sfSprite_getTextureRect(sf->duck_sprite);

    area.left = (area.left + 110);
    if (area.left >= frame_count * 110)
        area.left = 0;
    sfSprite_setTextureRect(sf->duck_sprite, area);
}

int initialize_sprite_backgrount(sf_struct_t *sf)
{
    sf->background_sprite = sfSprite_create();
    if (!sf->background_sprite)
        return EXIT_FAILURE;
    sf->background_texture = sfTexture_createFromFile
        ("./asset/sprite/background.png", NULL);
    if (!sf->background_texture)
        return EXIT_FAILURE;
    sfSprite_setTexture(sf->background_sprite, sf->background_texture, sfTrue);
    return EXIT_SUCCESS;
}
