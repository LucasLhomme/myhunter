/*
** EPITECH PROJECT, 2024
** Main
** File description:
** Main of my hunter
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include "./include/my.h"


extern sfVideoMode mode;
extern sfRenderWindow* window;
extern sfTexture* texture;
extern sfSprite* sprite;
extern sfFont* font;
extern sfText* text;
extern sfMusic* music;
extern sfEvent event;

int errorhand(void)
{
    if (initialize_window() == EXIT_FAILURE ||
        initialize_sprite() == EXIT_FAILURE ||
        initialize_text() == EXIT_FAILURE ||
        initialize_music() == EXIT_FAILURE)
        return EXIT_FAILURE;
}

int windowhand(void)
{
}

int main(int windowhand)

{
    if (errorhand() == EXIT_FAILURE)
        return EXIT_FAILURE;
    
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_drawText(window, text, NULL);
        sfRenderWindow_display(window);
        if (event.type == sfEvtClosed)
            while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
    }

    cleanup_resources();
    return EXIT_SUCCESS;
}
