/*
** EPITECH PROJECT, 2024
** Intialize music
** File description:
** the song for my_hunter
*/

#include <stdlib.h>
#include "../../include/sf.h"

int initialize_music(void)
{
    music = sfMusic_createFromFile("./asset/song/FE!N.ogg");
    if (!music)
        return EXIT_FAILURE;
    sfMusic_play(music);
    return EXIT_SUCCESS;
}
