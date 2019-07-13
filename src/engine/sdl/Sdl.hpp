#ifndef ENGINE_SDLBASE_HPP
#define ENGINE_SDLBASE_HPP

#include <SDL2/SDL.h>

#include "../exceptions/SDLException.hpp"
#include "SdlRenderer.hpp"
#include "SdlVersion.hpp"
#include "SdlWindow.hpp"

class Sdl
{
    public:
    Sdl();
    ~Sdl();

    SdlVersion version_compile_with() const;
    SdlVersion version_linked_to() const;

    private:
    SdlWindow main_window;
    SdlRenderer main_renderer;

    void initialize_main_window();
    void initialize_main_renderer();
};

#endif
