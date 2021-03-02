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
    if (engine->screenSavers.rects[i].size.x == engine->screenSavers.rects[i].originalSize.x)
      engine->screenSavers.rects[i].size.x = 0.0f;
    if (engine->screenSavers.rects[i].direction == 'R') {
      // RIGHT

    } else {
      // LEFT

    }
  }
}