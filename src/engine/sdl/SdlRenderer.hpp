#ifndef ENGINE_SDL_SDLRENDERER_HPP
#define ENGINE_SDL_SDLRENDERER_HPP

#include <memory>

struct SDLRendererDeleter
{
    void operator()( SDL_Renderer *renderer )
    {
        SDL_DestroyRenderer( renderer );
    }
};

using SdlRenderer = std::unique_ptr< SDL_Renderer, SDLRendererDeleter >;

#endif
