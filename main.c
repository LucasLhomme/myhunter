/*
** EPITECH PROJECT, 2024
** Main
** File description:
** Main of my hunter
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include "./include/my.h"

extern sfRenderWindow* window;
extern sfSprite* sprite;
extern sfText* text;
extern sfMusic* music;
extern sfEvent event;

int errorhand(void)
{
    if (initialize_window() == EXIT_FAILURE ||
        initialize_sprite() == EXIT_FAILURE ||
        initialize_text() == EXIT_FAILURE ||
        initialize_music() == EXIT_FAILURE){
        cleanup_resources();
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

int main(void)
{
    if (errorhand() == EXIT_FAILURE)
        return EXIT_FAILURE;
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)
            && event.type != sfEvtClosed);
        if (event.type == sfEvtClosed) {
            sfRenderWindow_close(window);
        }
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_drawText(window, text, NULL);
        sfRenderWindow_display(window);
    }
    cleanup_resources();
    return EXIT_SUCCESS;
}
