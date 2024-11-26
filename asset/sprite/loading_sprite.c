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


int initialize_sprite(sf_struct_t *sf)
{
    sf->area = (sfIntRect) {0, 0, 110, 95};
    sf->scale = (sfVector2f) {1, 1};

    sf->sprite = sfSprite_create();
    if (!sf->sprite) {
        printf("Erreur : Impossible de créer le sprite.\n");
        return EXIT_FAILURE;
    }

    sf->texture = sfTexture_createFromFile("./asset/sprite/cute_image.jpg", NULL);
    if (!sf->texture) {
        printf("Erreur : Impossible de charger la texture.\n");
        sfSprite_destroy(sf->sprite);
        return EXIT_FAILURE;
    }

    sfSprite_setTexture(sf->sprite, sf->texture, sfTrue);
    sfSprite_setTextureRect(sf->sprite, sf->area);
    sfSprite_setScale(sf->sprite, sf->scale);

    return EXIT_SUCCESS;
}

void animate_sprite(sf_struct_t *sf, int frame_count)
{
    sfIntRect area = sfSprite_getTextureRect(sf->sprite);

    area.left = (area.left + 32);
    if (area.left >= frame_count * 32)
        area.left = 0;
    sfSprite_setTextureRect(sf->sprite, area);
}
