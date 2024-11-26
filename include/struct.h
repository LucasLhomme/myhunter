/*
** EPITECH PROJECT, 2024
** Struct .h
** File description:
** the struct for my hunter
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <stdarg.h>

#ifndef SF
    #define SF

typedef struct sf_struct {
    sfRenderWindow *window;
    sfEvent event;
    sfSprite *background_sprite;
    sfTexture *background_texture;
    sfSprite *duck_sprite;
    sfTexture *duck_texture;
    sfText *text;
    sfFont *font;
    sfMusic *music;
    sfIntRect area;
    sfVector2f scale;
    sfVector2f speed;
    sfVector2f position;
    sfClock *clock;
    sfVector2f mouse;
    sfFloatRect bounds;
} sf_struct_t;
#endif
