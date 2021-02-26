/*
** EPITECH PROJECT, 2021
** draw.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <screenSaver.h>

void flushBuffer(engine_t *engine)
{
  sfTexture *texture = sfTexture_create(HD_LINE_SIZE, HD_COLUMN_SIZE);

  sfTexture_updateFromPixels(
    texture, 
    engine->screenSavers.pixelBuffer,
    HD_LINE_SIZE, HD_COLUMN_SIZE, 0, 0
  );

  sfSprite_setTexture(
    engine->screenSavers.pixelSprite,
    texture, 
    sfTrue
  );
  sfRenderWindow_drawSprite(
    engine->app.window,
    engine->screenSavers.pixelSprite,
    NULL
  );
  sfTexture_destroy(texture);
}

void drawArrow(engine_t *engine)
{
  sfVector2f reverseScale = {-1.0f, -1.0f};
  sfVector2f positionOrigin = {256.0f, 1080.0f};
  sfFloatRect leftArrow = {0.0f, 0.0f, 256.0f, 1080.f};
  sfFloatRect rightArrow = {1920.0f - 256.0f, 0.0f, 256.0f, 1080.0f};

  sfSprite_scale(engine->nextSprite, reverseScale);
  sfSprite_setPosition(engine->nextSprite, positionOrigin);
  if (sfFloatRect_contains(&leftArrow, engine->cursor.x, engine->cursor.y))
    sfRenderWindow_drawSprite(engine->app.window, engine->nextSprite, NULL);
  sfSprite_setPosition(engine->nextSprite, (sfVector2f){1920.0f - 256.0f, 0.0f});
  sfSprite_scale(engine->nextSprite, reverseScale);
  if (sfFloatRect_contains(&rightArrow, engine->cursor.x, engine->cursor.y))
    sfRenderWindow_drawSprite(engine->app.window, engine->nextSprite, NULL);
}

void screenSaverOne(engine_t *engine)
{
  drawRect((sfVector2f){0.0f, 0.0f}, (sfVector2f){HD_LINE_SIZE, HD_COLUMN_SIZE}, BACKGROUND, engine);
  drawRect((sfVector2f){120.0f, 120.0f}, (sfVector2f){200.0f, 50.0f}, BLUE, engine);
  drawRect((sfVector2f){200.0f, 200.0f}, (sfVector2f){250.0f, 70.0f}, PINK, engine);
  drawRect((sfVector2f){280.0f, 280.0f}, (sfVector2f){220.0f, 60.0f}, GREY, engine);
}

void screenSaverTwo(engine_t *engine)
{
  (void)engine;
}

void screenSaverThree(engine_t *engine)
{
  (void)engine;
}