/*
** EPITECH PROJECT, 2021
** screenSaver.h
** File description:
** adrien.colombier@epitech.eu
*/

#pragma once

/* STANDART INCLUDES */
#include <stdlib.h>
#include <stdint.h>
#include <math.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>

/* DEFINES */
#define FAILURE         84
#define RGBA            4
#define HD              1920 * 1080
#define HD_LINE_SIZE    1920
#define HD_COLUMN_SIZE  1080
#define ULTRA_HD        3840 * 2060
#define BACKGROUND      0x2D1343FF
#define BLUE            0x1C9BDCFF
#define PINK            0xFF07BFFF
#define GREY            0x260D3AFF

/* TYPES */
typedef struct s_window {
  sfRenderWindow *window;
  sfVideoMode     mode;
} window_t;

typedef struct s_screenSaver {
  sfUint8    *pixelBuffer;
  sfSprite   *pixelSprite;
  size_t      nbOfSprites;
  size_t      nbOfTextures;
} screenSaver_t;

typedef struct s_engine {
  window_t        app;
  sfVector2f      cursor;
  sfSprite       *nextSprite;
  sfTexture      *nextTexture;
  screenSaver_t  *screenSavers;
  size_t          currentScreen;
  size_t          nbOfScreen;
} engine_t;

/* PROTOTYPES */
size_t screenSaver(void);
size_t globalInit(engine_t *screenSaver);
size_t appInit(engine_t *engine);
size_t screenSaverInit(engine_t *engine);
size_t events(engine_t *screenSaver);
void   drawSaver(engine_t *screenSaver);
void   drawArrow(engine_t *engine);
void   drawRect(sfVector2f position, sfVector2f size, uint32_t color, engine_t *engine);
void   drawCircle(sfVector2f position, uint32_t size, uint32_t color, engine_t *engine);
float  radiusBlur(sfVector2f position, uint32_t size, uint32_t x, uint32_t y);
void   flushBuffer(engine_t *engine);
void   updateCursor(engine_t *engine);

