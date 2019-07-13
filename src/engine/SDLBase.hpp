#ifndef ENGINE_SDLBASE_HPP
#define ENGINE_SDLBASE_HPP

#include <SDL2/SDL.h>

#include "exceptions/SDLException.hpp"
#include "sdl/SdlVersion.hpp"

class SDLBase
{
    public:
    SDLBase();
    ~SDLBase();

    SdlVersion version_compile_with() const;
    SdlVersion version_linked_to() const;

    private:
};

#endif
