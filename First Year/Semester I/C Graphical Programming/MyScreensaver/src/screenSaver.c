/*
** EPITECH PROJECT, 2021
** screenSaver.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <screenSaver.h>

size_t screenSaver(void)
{
  engine_t engine;

  if (globalInit(&engine))
    return FAILURE;
  while (sfRenderWindow_isOpen(engine.app.window)) {
    if (events(&engine))
      return FAILURE;
    updateCursor(&engine);
    drawSaver(&engine);
  }
  return EXIT_SUCCESS;
}

size_t events(engine_t *engine)
{
  static sfEvent event;

   while (sfRenderWindow_pollEvent(engine->app.window, &event)) {
      if (event.type == sfEvtClosed || sfKeyboard_isKeyPressed(sfKeyEscape))
        sfRenderWindow_close(engine->app.window);
  }
  return 0;
}

void drawSaver(engine_t *engine)
{
  sfRenderWindow_clear(engine->app.window, sfBlack);
  // background : #2d1343
  drawRect((sfVector2f){0.0f, 0.0f}, (sfVector2f){HD_LINE_SIZE, HD_COLUMN_SIZE}, 0x2D1343FF, engine);
  // BLEU : #1c9bdc
  drawRect((sfVector2f){120.0f, 120.0f}, (sfVector2f){200.0f, 50.0f}, 0x1C9BDCFF, engine);
  // ROSE : #ff07bf
  drawRect((sfVector2f){200.0f, 200.0f}, (sfVector2f){250.0f, 70.0f}, 0xFF07BFFF, engine);
  // DARK : #260d3a
  drawRect((sfVector2f){280.0f, 280.0f}, (sfVector2f){220.0f, 60.0f}, 0x260D3AFF, engine);
  flushBuffer(engine);
  drawArrow(engine);
	sfRenderWindow_display(engine->app.window);
}
