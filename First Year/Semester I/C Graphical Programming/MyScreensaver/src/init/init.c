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
  size_t rects = 20;

  engine->currentScreen = 0;
  engine->nbOfScreen = 3;
  engine->screenSavers.rects = malloc(rects * sizeof(slidingRect_t));
  engine->screenSavers.pixelBuffer = malloc((HD) * RGBA * sizeof(sfUint8));
  engine->screenSavers.pixelSprite = sfSprite_create();
  if (engine->screenSavers.pixelBuffer == NULL || engine->screenSavers.rects == NULL)
    return FAILURE;
  for (size_t i = 0; i < rects; i++) {
    engine->screenSavers.rects->status = 'I';
    engine->screenSavers.rects->direction = rand() % 2 ? 'R' : 'L';
    engine->screenSavers.rects->position = (sfVector2f){rand() % 300 + 960, rand() % 900};
    engine->screenSavers.rects->size = (sfVector2f){rand() % 250 + 100, rand() % 50 + 50};
  }
  return EXIT_SUCCESS;
}