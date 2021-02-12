/*
** EPITECH PROJECT, 2021
** draw.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <screenSaver.h>

void drawArrow(engine_t *engine)
{
  sfVector2f reverseScale = {-1.0f, -1.0f};
  sfVector2f positionOrigin = {256.0f, 1080.0f};
  
  sfSprite_scale(engine->nextSprite, reverseScale);
  sfSprite_setPosition(engine->nextSprite, positionOrigin);
  sfRenderWindow_drawSprite(engine->app.window, engine->nextSprite, NULL);
  sfSprite_setPosition(engine->nextSprite, (sfVector2f){1920.0f - 256.0f, 0.0f});
  sfSprite_scale(engine->nextSprite, reverseScale);
  sfRenderWindow_drawSprite(engine->app.window, engine->nextSprite, NULL);
}