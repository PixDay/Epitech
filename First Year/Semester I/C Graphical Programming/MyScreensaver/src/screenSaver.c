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
  drawRect((sfVector2f){0.0f, 0.0f}, (sfVector2f){1000.0f, 1000.0f}, 0xBABABAFF, engine);
  flushBuffer(engine);
  drawArrow(engine);
	sfRenderWindow_display(engine->app.window);
}
