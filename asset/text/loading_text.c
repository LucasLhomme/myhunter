/*
** EPITECH PROJECT, 2024
** Initialize text
** File description:
** load my text
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include "../../include/struct.h"

int initialize_text(sf_struct *sf)
{
    sf->font = sfFont_createFromFile("./asset/text/arial.ttf");
    if (!sf->font)
        return EXIT_FAILURE;
    sf->text = sfText_create();
    sfText_setString(sf->text, "");
    sfText_setFont(sf->text, sf->font);
    sfText_setCharacterSize(sf->text, 50);
    return EXIT_SUCCESS;
}
