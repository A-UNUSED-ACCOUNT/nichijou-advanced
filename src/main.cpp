#include "SDL.h"

int main(int argc, char *argv[])
{
  SDL_Init(SDL_INIT_VIDEO);

  SDL_Window *window = SDL_CreateWindow(
      "Nichijou Advanced",
      SDL_WINDOWPOS_UNDEFINED,
      SDL_WINDOWPOS_UNDEFINED,
      240,
      160,
      SDL_WINDOW_BORDERLESS | SDL_WINDOW_ALLOW_HIGHDPI

  );

  SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);
  SDL_CreateWindowAndRenderer(800, 600, 0, &window, &renderer);

  SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
  SDL_RenderClear(renderer);
  SDL_RenderPresent(renderer);

  SDL_RenderDrawPoint(renderer, 100, 100); //Renders on middle of screen.
  SDL_RenderPresent(renderer);
  SDL_Delay(3000);

  SDL_DestroyWindow(window);
  SDL_Quit();

  return 0;
}

