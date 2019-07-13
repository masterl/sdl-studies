#ifndef ENGINE_EXCEPTIONS_SDLEXCEPTION_HPP
#define ENGINE_EXCEPTIONS_SDLEXCEPTION_HPP

#include <SDL2/SDL.h>

#include "EngineException.hpp"

class SDLException : public EngineException
{
    public:
    SDLException( std::string const &message )
        : EngineException( message + "\nSDL ERROR: " + SDL_GetError() )
    {
    }
};

#endif
