/*
** EPITECH PROJECT, 2021
** init.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <screenSaver.h>

size_t globalInit(engine_t *engine)
{
  if (appInit(engine))
    return FAILURE;
  return EXIT_SUCCESS;
}

size_t appInit(engine_t *engine)
{
  engine->app.mode = (sfVideoMode){1920, 1080, 32};
  engine->app.window = sfRenderWindow_create(engine->app.mode, "SCREENSAVER", sfFullscreen | sfClose, NULL);
  if (engine->app.window == NULL)
    return FAILURE;
  return EXIT_SUCCESS;
}