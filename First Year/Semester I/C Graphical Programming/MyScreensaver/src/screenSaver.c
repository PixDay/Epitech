/*
** EPITECH PROJECT, 2021
** screenSaver.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <screenSaver.h>

size_t screenSaver(int argc, char **argv)
{
  screenSaver_t screenSaver;
  (void)argc;
  (void)argv;
  // CHECK LES CONNARDS QUI SUPRIMENT L'ENV ...

  if (globalInit(&screenSaver))
    return FAILURE;
  while (sfRenderWindow_isOpen(screenSaver.window.window)) {
    if (events(&screenSaver))
      return FAILURE;
    drawSaver(&screenSaver);
  }
  return EXIT_SUCCESS;
}