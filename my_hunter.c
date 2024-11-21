/*
** EPITECH PROJECT, 2024
** My Hunter
** File description:
** First Game in csfml !
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include "../include/my.h"

sfRenderWindow* window;
sfTexture* texture;
sfSprite* sprite;
sfFont* font;
sfText* text;
sfMusic* music;
sfEvent event;


int initialize_music(void)
{
    music = sfMusic_createFromFile("./asset/song/FE!N.ogg");
    if (!music)
        return EXIT_FAILURE;
    sfMusic_play(music);
    return EXIT_SUCCESS;
}

int initialize_sprite(void)
{
    texture = sfTexture_createFromFile("./asset/sprite/cute_image.jpg", NULL);
    if (!texture)
        return EXIT_FAILURE;
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    return EXIT_SUCCESS;
}

int initialize_text(void)
{
    font = sfFont_createFromFile("./asset/text/arial.ttf");
    if (!font)
        return EXIT_FAILURE;
    text = sfText_create();
    sfText_setString(text, "CACA");
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 250);
    return EXIT_SUCCESS;
}

int initialize_window(void)
{
    sfVideoMode mode = {800, 600, 32};

    window = sfRenderWindow_create(mode, "Test", sfResize | sfClose, NULL);
    if (!window)
        return EXIT_FAILURE;
    return EXIT_SUCCESS;
}

void cleanup_resources(void)
{
    if (text != NULL) {
        sfText_destroy(text);
    }
    if (font != NULL) {
        sfFont_destroy(font);
    }
    if (sprite != NULL) {
        sfSprite_destroy(sprite);
    }
    if (texture != NULL) {
        sfTexture_destroy(texture);
    }
    if (music != NULL) {
        sfMusic_destroy(music);
    }
    if (window != NULL) {
        sfRenderWindow_destroy(window);
    }
}
