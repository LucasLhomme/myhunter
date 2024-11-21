/*
** EPITECH PROJECT, 2024
** Initialize text
** File description:
** load my text
*/

#include <stdlib.h>
#include "../../include/sf.h"

int initialize_text(void)
{
    font = sfFont_createFromFile("./asset/text/arial.ttf");
    if (!font)
        return EXIT_FAILURE;
    text = sfText_create();
    sfText_setString(text, "");
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 50);
    return EXIT_SUCCESS;
}
