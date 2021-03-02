/*
** EPITECH PROJECT, 2021
** screenSaverOne.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <screenSaver.h>

void screenSaverOneLogic(engine_t *engine)
{
  for (size_t i = 0; i < RECTS; i++) {
    if (engine->screenSavers.rects[i].size.x <= 0.0f)
      engine->screenSavers.rects[i].status = 'R';
    if (engine->screenSavers.rects[i].status == 'R') {
      engine->screenSavers.rects[i].status = 'I';
      engine->screenSavers.rects[i].size.x = 1.0f;
      engine->screenSavers.rects[i].position.x = engine->screenSavers.rects[i].originalPos.x;
    }
    if (engine->screenSavers.rects[i].size.x >= engine->screenSavers.rects[i].originalSize.x && engine->screenSavers.rects[i].status == 'I')
      engine->screenSavers.rects[i].status = 'S';
    if (engine->screenSavers.rects[i].direction == 'R' && engine->screenSavers.rects[i].status == 'I')
      engine->screenSavers.rects[i].size.x++;
    if (engine->screenSavers.rects[i].direction == 'R' && engine->screenSavers.rects[i].status == 'S') {
      engine->screenSavers.rects[i].position.x++;
      engine->screenSavers.rects[i].size.x--;
    }
  }
}