/*
** EPITECH PROJECT, 2024
** My Hunter
** File description:
** First Game in csfml !
*/

#include <stdlib.h>
#include <SFML/Window/Export.h>
#include <SFML/Window/Keyboard.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "./include/my.h"
#include "./include/struct.h"

void cleanup_resources(sf_struct_t *sf)
{
    sfClock_destroy(sf->clock);
    sfText_destroy(sf->text);
    sfFont_destroy(sf->font);
    sfRenderWindow_destroy(sf->window);
}
