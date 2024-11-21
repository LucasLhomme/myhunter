/*
** EPITECH PROJECT, 2024
** sf-file
** File description:
** include sf-file
*/

#include <stdlib.h>
#include <SFML/Window/Export.h>
#include <SFML/Window/Keyboard.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>

#ifndef SF_H_
    #define SF_H_

extern sfRenderWindow* window;
extern sfSprite* sprite;
extern sfTexture* texture;
extern sfText* text;
extern sfFont* font;
extern sfMusic* music;
extern sfEvent event;

#endif /* !SF_H_ */
