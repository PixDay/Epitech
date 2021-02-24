/*
** EPITECH PROJECT, 2021
** shapeDrawer.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <screenSaver.h>

void drawRect(sfVector2f position, sfVector2f size, uint32_t color, engine_t *engine)
{
  sfVector2i coord = {0, 0};

  for (uint32_t y = 0; y < size.y; y++) {
    for (uint32_t x = 0; x < size.x; x++) {
      coord.x = position.x + x;
      coord.y = position.y + y * HD_LINE_SIZE;
      engine->screenSavers[engine->currentScreen].pixelBuffer[coord.y + coord.x] = color;
    }
  }
}

void drawCircle(sfVector2f position, uint32_t size, uint32_t color, engine_t *engine)
{
  (void)position;
  (void)size;
  (void)color;
  (void)engine;
}