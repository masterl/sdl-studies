#include "Sdl.hpp"

#include <SDL2/SDL_version.h>

#include <iostream>

Sdl::Sdl()
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

    initialize_main_window();
    initialize_main_renderer();
}

Sdl::~Sdl()
{
    SDL_Quit();
}

void Sdl::initialize_main_window()
{
    main_window.reset( SDL_CreateWindow( "SDL test", 50, 50, 800, 600, SDL_WINDOW_OPENGL ) );

    if( main_window == nullptr )
    {
        throw SDLException( "Could not create window: " );
    }
}

void Sdl::initialize_main_renderer()
{
    main_renderer.reset( SDL_CreateRenderer( main_window.get(), -1, SDL_RENDERER_ACCELERATED ) );
}

SdlVersion Sdl::version_compile_with() const
{
    SDL_version version;

    SDL_VERSION( &version );

    return version;
}

SdlVersion Sdl::version_linked_to() const
{
    SDL_version version;

    SDL_GetVersion( &version );

    return version;
}
