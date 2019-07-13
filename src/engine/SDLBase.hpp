#ifndef ENGINE_SDLBASE_HPP
#define ENGINE_SDLBASE_HPP

#include <SDL2/SDL.h>

#include "exceptions/SDLException.hpp"

class SDLBase
{
    public:
    SDLBase();
    ~SDLBase();

    SDL_version version_compile_with() const;
    SDL_version version_linked_to() const;

    private:
};

#endif
