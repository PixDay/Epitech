/*
** EPITECH PROJECT, 2021
** init.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <screenSaver.h>

size_t globalInit(engine_t *engine)
{
  if (appInit(engine) || screenSaverInit(engine))
    return FAILURE;
  return EXIT_SUCCESS;
}

size_t appInit(engine_t *engine)
{
  engine->app.mode = (sfVideoMode){1920, 1080, 32};
  engine->app.window = sfRenderWindow_create(engine->app.mode, "SCREENSAVER", sfFullscreen | sfClose, NULL);
  engine->nextSprite = sfSprite_create();
  engine->nextTexture = sfTexture_createFromFile("img/next.png", NULL);
  if (!engine->app.window || !engine->nextSprite || !engine->nextTexture)
    return FAILURE;
  sfSprite_setTexture(engine->nextSprite, engine->nextTexture, sfTrue);
  return EXIT_SUCCESS;
}

size_t screenSaverInit(engine_t *engine)
{
  engine->currentScreen = 0;
  engine->nbOfScreen = 3;
  engine->screenSavers = malloc(engine->nbOfScreen * sizeof(screenSaver_t));
  if (engine->screenSavers == NULL)
    return FAILURE;
  for (size_t scene = 0; scene < engine->nbOfScreen; scene++) {
    engine->screenSavers[scene].pixelBuffer = malloc((HD) * sizeof(uint32_t));
    if (engine->screenSavers[scene].pixelBuffer == NULL)
      return FAILURE;
  }
  return EXIT_SUCCESS;
}