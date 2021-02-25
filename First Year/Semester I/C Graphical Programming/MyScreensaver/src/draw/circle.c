/*
** EPITECH PROJECT, 2021
** circle.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <screenSaver.h>

float radiusBlur(sfVector2f position, uint32_t size, uint32_t x, uint32_t y)
{
  sfVector2f center = {position.x + size * 2, position.y + size * 2};
  sfVector2f point = {position.x + x * RGBA, position.y + y * RGBA};
  float distance = (float)sqrt(pow((point.x - center.x), 2) + pow((point.y - center.y), 2));
  
  if ((uint32_t)distance > size * 2)
    return 0.0f;
  return (distance == 0) ? 1.0f : distance / (size * 2);
}
