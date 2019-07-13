#ifndef ENGINE_SDLBASE_HPP
#define ENGINE_SDLBASE_HPP

#include <SDL2/SDL.h>

#include "exceptions/SDLException.hpp"

class SDLBase
{
    public:
    SDLBase()
    {
        // SDL_INIT_TIMER      timer subsystem
        // SDL_INIT_AUDIO      audio subsystem
        // SDL_INIT_VIDEO      video subsystem;
        //              automatically initializes the events subsystem
        // SDL_INIT_JOYSTICK   joystick subsystem;
        //              automatically initializes the events subsystem
        // SDL_INIT_HAPTIC     haptic (force feedback) subsystem
        // SDL_INIT_GAMECONTROLLER     controller subsystem;
        //              automatically initializes the joystick subsystem
        // SDL_INIT_EVENTS             events subsystem
        // SDL_INIT_EVERYTHING         all of the above subsystems
        // SDL_INIT_NOPARACHUTE        compatibility; this flag is ignored
        if( SDL_Init( SDL_INIT_VIDEO | SDL_INIT_AUDIO ) != 0 )
        {
            throw SDLException( "Unable to initialize SDL!" );
        }
    }

    ~SDLBase()
    {
        SDL_Quit();
    }
};

#endif
