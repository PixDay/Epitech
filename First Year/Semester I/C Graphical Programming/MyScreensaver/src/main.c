/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <time.h>
#include <screenSaver.h>

int main(int argc, char **argv, char **env)
{
  (void)argc;
  (void)argv;
  (void)env;
  // CHECK LES CONNARDS QUI SUPRIMENT L'ENV ...
  srand(time(NULL));
  screenSaver();
  return EXIT_SUCCESS;
}