#include "Engine.hpp"

#include "exceptions/SDLException.hpp"

Engine::Engine()
{
    main_window.reset( SDL_CreateWindow( "SDL test", 50, 50, 800, 600, SDL_WINDOW_OPENGL ) );

    if( main_window == nullptr )
    {
        throw SDLException( "Could not create window: " );
    }
}
