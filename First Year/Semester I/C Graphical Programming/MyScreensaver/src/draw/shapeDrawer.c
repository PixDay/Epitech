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
  sfUint8 R = (color & 0xFF000000) >> 0x18;
  sfUint8 G = (color & 0xFF0000) >> 0x10;
  sfUint8 B = (color & 0xFF00) >> 0x8;
  sfUint8 A = (color & 0xFF);
  
  for (uint32_t y = 0; y < size.y; y++) {
    for (uint32_t x = 0; x < size.x; x++) {
      coord.x = (position.x * RGBA) + (x * RGBA);
      coord.y = (position.y * HD_LINE_SIZE * RGBA) + (y * RGBA * HD_LINE_SIZE);
      engine->screenSavers[engine->currentScreen].pixelBuffer[coord.y + coord.x] = R;
      engine->screenSavers[engine->currentScreen].pixelBuffer[coord.y + coord.x + 1] = G;
      engine->screenSavers[engine->currentScreen].pixelBuffer[coord.y + coord.x + 2] = B;
      engine->screenSavers[engine->currentScreen].pixelBuffer[coord.y + coord.x + 3] = A;
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