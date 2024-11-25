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
    sfEvent event;
    sfRenderWindow *window;
    sfSprite *sprite;
    sfText *text;
    sfFont *font;
    sfTexture *texture;
    sfMusic *music;
    sfIntRect *area;
} sf_struct_t;
#endif
