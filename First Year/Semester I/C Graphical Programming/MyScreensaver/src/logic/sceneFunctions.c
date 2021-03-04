/*
** EPITECH PROJECT, 2021
** sceneFunctions.c
** File description:
** adrien.colombier@epitech.eu
*/

#include "screenSaver.h"

void changeScene(engine_t *engine)
{
  int state = 0;

  if (engine->cursor.x < 50.0f)
    state = -1;
  else if (engine->cursor.x > 1870.0f)
    state = 1;
  engine->currentScreen += state;
  engine->currentScreen = (engine->currentScreen == -1) ? engine->nbOfScreen - 1 : engine->currentScreen;
  engine->currentScreen = (engine->currentScreen == engine->nbOfScreen) ? 0 : engine->currentScreen;
}