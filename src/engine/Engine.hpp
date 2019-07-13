#ifndef ENGINE_ENGINE_HPP
#define ENGINE_ENGINE_HPP

#include "AssetsManager.hpp"
#include "sdl/Sdl.hpp"

class Engine
{
    public:
    Engine();

    Sdl sdl;
    AssetsManagerPtr assets_manager;

    private:
    void initialize_assets_manager();
};

#endif
