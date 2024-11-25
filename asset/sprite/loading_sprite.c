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

int initialize_sprite(sf_struct *sf)
{
    sf->texture = sfTexture_createFromFile("./asset/sprite/cute_image.jpg", NULL);
    if (!sf->texture)
        return EXIT_FAILURE;
    sf->sprite = sfSprite_create();
    sfSprite_setTexture(sf->sprite, sf->texture, sfTrue);
    return EXIT_SUCCESS;
}
