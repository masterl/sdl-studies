#ifndef ENGINE_SDL_SDLWINDOW_HPP
#define ENGINE_SDL_SDLWINDOW_HPP

#include <memory>

struct SDLWindowDeleter
{
    void operator()( SDL_Window *window )
    {
        SDL_DestroyWindow( window );
    }
};

using SdlWindow = std::unique_ptr< SDL_Window, SDLWindowDeleter >;

#endif
