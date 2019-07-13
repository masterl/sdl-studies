#ifndef ENGINE_ENGINE_HPP
#define ENGINE_ENGINE_HPP

#include "sdl/Sdl.hpp"

class Engine
{
    public:
    Engine();

    Sdl sdl;

    private:
    SdlWindow main_window;
};

#endif
