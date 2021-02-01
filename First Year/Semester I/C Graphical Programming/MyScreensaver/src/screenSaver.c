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
  
  return EXIT_SUCCESS;
}