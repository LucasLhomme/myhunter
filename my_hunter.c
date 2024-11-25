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

void hand_keypress(sf_struct *sf)
{
    static int i = 1;

    if (sf->event.type == sfEvtKeyPressed && sf->event.key.code == sfKeyH) {
        my_printf("printf 1 :%i, ", i);
        i++;
        if (i == 2) {
            my_printf("printf 2 :%i, ", i);
            sfText_setString(sf->text, "PLACEHOLDER");
        }
        if (i > 2) {
            my_printf("printf 3 :%i\n", i);
            sfText_setString(sf->text, "test");
            i = 1;
        }
    }
}

void cleanup_resources(sf_struct *sf)
{
    sfText_destroy(sf->text);
    sfFont_destroy(sf->font);
    sfRenderWindow_destroy(sf->window);
}
