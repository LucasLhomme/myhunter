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
#include "./include/struct.h"



int error_hand(sf_struct_t *sf)
{
    if (initialize_window(sf) == EXIT_FAILURE ||
        initialize_sprite_backgrount(sf) == EXIT_FAILURE ||
        initialize_sprite_duck(sf) == EXIT_FAILURE ||
        initialize_text(sf) == EXIT_FAILURE ||
        initialize_music(sf) == EXIT_FAILURE){
        cleanup_resources(sf);
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

void exit_events(sf_struct_t *sf)
{
    while (sfRenderWindow_pollEvent(sf->window, &sf->event)) {
        if (sf->event.type == sfEvtClosed)
            sfRenderWindow_close(sf->window);
        hand_keypress(sf);
        mute_music(sf);
    }
}

int initialize_window(sf_struct_t *sf)
{
    sfVideoMode mode = {1200, 1000, 32};

    sf->window = sfRenderWindow_create(mode, "Test", sfResize | sfClose, NULL);
    if (!sf->window)
        return EXIT_FAILURE;
    return EXIT_SUCCESS;
}

void game_loop(sf_struct_t *sf)
{
    int frame = 0;
    int animation_framerate = 15;

    sfRenderWindow_setFramerateLimit(sf->window, 60);
    while (sfRenderWindow_isOpen(sf->window)) {
        exit_events(sf);
        sfRenderWindow_clear(sf->window, sfBlack);
        sfRenderWindow_drawSprite(sf->window, sf->background_sprite, NULL);
        sfRenderWindow_drawSprite(sf->window, sf->duck_sprite, NULL);
        sfRenderWindow_drawText(sf->window, sf->text, NULL);
        sfRenderWindow_display(sf->window);
        if (frame == 0)
            animate_sprite_duck(sf, 3);
        frame = (frame + 1) % animation_framerate;
    }
}

int main(void)
{
    sf_struct_t sf = {0};

    if (error_hand(&sf) == EXIT_FAILURE)
        return EXIT_FAILURE;
    game_loop(&sf);
    exit_events(&sf);
}
