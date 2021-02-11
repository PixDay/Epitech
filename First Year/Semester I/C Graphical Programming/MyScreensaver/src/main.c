/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <screenSaver.h>

int main(int argc, char **argv, char **env)
{
  (void)argc;
  (void)argv;
  (void)env;
  // CHECK LES CONNARDS QUI SUPRIMENT L'ENV ...
  screenSaver();
  return EXIT_SUCCESS;
}