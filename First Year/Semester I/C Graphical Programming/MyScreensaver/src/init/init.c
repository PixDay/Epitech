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
  engine->screenSavers.rects = malloc(RECTS * sizeof(slidingRect_t));
  engine->screenSavers.pixelBuffer = malloc((HD) * RGBA * sizeof(sfUint8));
  engine->screenSavers.pixelSprite = sfSprite_create();
  if (engine->screenSavers.pixelBuffer == NULL || engine->screenSavers.rects == NULL)
    return FAILURE;
  for (size_t i = 0; i < RECTS; i++) {
    engine->screenSavers.rects[i].status = 'I';
    engine->screenSavers.rects[i].direction = rand() % 2 ? 'R' : 'L';
    engine->screenSavers.rects[i].position = (sfVector2f){(float)(rand() % 1200), (float)(rand() % 900)};
    engine->screenSavers.rects[i].size = (sfVector2f){(float)(rand() % 600 + 100), (float)(rand() % 130 + 50)};
    engine->screenSavers.rects[i].originalPos = engine->screenSavers.rects->position;
    engine->screenSavers.rects[i].originalSize = engine->screenSavers.rects->size;
    engine->screenSavers.rects[i].color = rand() % 3;
  }
  return EXIT_SUCCESS;
}