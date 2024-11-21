/*
** EPITECH PROJECT, 2024
** Initialize sprite
** File description:
** load my sprite
*/

#include <stdlib.h>
#include "../../include/sf.h"

int initialize_sprite(void)
{
    texture = sfTexture_createFromFile("./asset/sprite/cute_image.jpg", NULL);
    if (!texture)
        return EXIT_FAILURE;
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    return EXIT_SUCCESS;
}
