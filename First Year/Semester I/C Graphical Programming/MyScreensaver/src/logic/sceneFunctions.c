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

  if (engine->cursor.x < 256.0f)
    state = -1;
  else if (engine->cursor.x > 1664.0f)
    state = 1;
  state = engine->currentScreen + state;
  engine->currentScreen = (state == -1) ? engine->nbOfScreen - 1 : (state == (int)engine->nbOfScreen) ? 0 : (size_t)state; 
}