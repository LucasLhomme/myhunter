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
#include "../include/my.h"
#include "../include/sf.h"

void hand_keypress(sfEvent event)
{
    static int i = 1;

    if (event.type == sfEvtKeyPressed && event.key.code == sfKeyH) {
        my_printf("printf 1 :%i, ", i);
        i++;
        if (i == 2) {
            my_printf("printf 2 :%i, ", i);
            sfText_setString(text, "PLACEHOLDER");
        }
        if (i > 2) {
            my_printf("printf 3 :%i\n", i);
            sfText_setString(text, "test");
            i = 1;
        }
    }
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
