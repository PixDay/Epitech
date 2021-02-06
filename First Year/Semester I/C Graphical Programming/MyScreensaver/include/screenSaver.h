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

typedef struct s_screenSaver {
  sfSprite  **sprites;
  sfTexture **textures;
  size_t      nbOfSprites;
  size_t      nbOfTextures;
} screenSaver_t;

typedef struct s_engine {
  window_t        app;
  screenSaver_t  *screenSavers;
  size_t          currentScreen;
  size_t          nbOfScreen;
} engine_t;

/* PROTOTYPES */
size_t screenSaver(int argc, char **argv);
size_t globalInit(engine_t *screenSaver);
size_t events(engine_t *screenSaver);
void   drawSaver(engine_t *screenSaver);
