/*
** EPITECH PROJECT, 2024
** Intialize music
** File description:
** the song for my_hunter
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include "../../include/struct.h"

int initialize_music(sf_struct_t *sf)
{
    sf->music = sfMusic_createFromFile("./asset/song/THE-MOST-MYSTERIOUS-SONG.ogg");
    if (!sf->music)
        return EXIT_FAILURE;
    sfMusic_setLoop(sf->music, sfTrue);
    sfMusic_play(sf->music);
    return EXIT_SUCCESS;
}
