/*
** EPITECH PROJECT, 2021
** screenSaver.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <screenSaver.h>

size_t screenSaver(int argc, char **argv)
{
  engine_t engine;
  (void)argc;
  (void)argv;
  // CHECK LES CONNARDS QUI SUPRIMENT L'ENV ...

  if (globalInit(&engine))
    return FAILURE;
  while (sfRenderWindow_isOpen(engine.app.window)) {
    if (events(&engine))
      return FAILURE;
    drawSaver(&engine);
  }
  return EXIT_SUCCESS;
}

void drawSaver(engine_t *engine)
{
  (void)engine;
}