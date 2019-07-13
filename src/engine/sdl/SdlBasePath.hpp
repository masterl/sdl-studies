#ifndef ENGINE_SDL_SDLBASEPATH_HPP
#define ENGINE_SDL_SDLBASEPATH_HPP

#include <SDL2/SDL.h>
#include <memory>

struct SDLBasePathDeleter
{
    void operator()( char *path )
    {
        SDL_free( path );
    }
};

using SdlBasePath = std::unique_ptr< char, SDLBasePathDeleter >;

#endif
