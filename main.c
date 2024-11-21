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
#include "../include/sf.h"

sfRenderWindow* window = NULL;
sfSprite* sprite = NULL;
sfTexture* texture = NULL;
sfText* text = NULL;
sfFont* font = NULL;
sfMusic* music = NULL;
sfEvent event;

int error_hand(void)
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

int initialize_window(void)
{
    sfVideoMode mode = {800, 600, 32};

    window = sfRenderWindow_create(mode, "Test", sfResize | sfClose, NULL);
    if (!window)
        return EXIT_FAILURE;
    return EXIT_SUCCESS;
}

void hand_events(void)
{
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
        if (event.type == sfEvtKeyPressed)
            hand_keypress(event);
    }
}

void game_loop(void)
{
    while (sfRenderWindow_isOpen(window)) {
        hand_events();
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_drawText(window, text, NULL);
        sfRenderWindow_display(window);
    }
}

int main(void)
{
    if (error_hand() == EXIT_FAILURE)
        return EXIT_FAILURE;
    game_loop();
    cleanup_resources();
    return EXIT_SUCCESS;
}
