/*
** EPITECH PROJECT, 2021
** screenSaver.h
** File description:
** adrien.colombier@epitech.eu
*/

#pragma once

/* STANDART INCLUDES */
#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>

/* DEFINES */
#define FAILURE 84

/* TYPES */
typedef struct s_screenSaver {
  sfRenderWindow *window;
  sfTexture     **textures;
  sfSprite      **sprites;
} screenSaver_t;

/* PROTOTYPES */
size_t screenSaver(int argc, char **argv);
size_t globalInit(screenSaver_t *screenSaver_t);