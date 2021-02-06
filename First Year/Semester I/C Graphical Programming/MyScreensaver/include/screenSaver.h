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
typedef struct s_window {
  sfRenderWindow *window;
  sfVideoMode     mode;
} window_t;

typedef struct s_engine {
  window_t        app;
  sfTexture     **textures; // new type to handle data --> to do
  sfSprite      **sprites;  // new type to handle functions --> to do
  size_t          currentScene;
  size_t          nbScene;
} engine_t;

/* PROTOTYPES */
size_t screenSaver(int argc, char **argv);
size_t globalInit(engine_t *screenSaver);

size_t events(engine_t *screenSaver);
void   drawSaver(engine_t *screenSaver);