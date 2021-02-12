/*
** EPITECH PROJECT, 2021
** cursor.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <screenSaver.h>

void updateCursor(engine_t *engine)
{
  sfVector2i cursorPosition = sfMouse_getPositionRenderWindow(engine->app.window);
  
  engine->cursor.x = (float)cursorPosition.x;
  engine->cursor.y = (float)cursorPosition.y;
}