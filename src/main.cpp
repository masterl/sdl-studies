#include <exception>
#include <iostream>

#include "engine/exceptions/EngineException.hpp"
#include "engine/sdl/Sdl.hpp"

int main()
{
    try
    {
        Sdl sdl;

        {
            SdlVersion version = sdl.version_compile_with();
            std::cout << "Compiled with SDL " << version << '\n';
        }

        {
            SdlVersion version = sdl.version_linked_to();
            std::cout << "Linked to SDL " << version << '\n';
        }

        SdlWindow window;

        window.reset( SDL_CreateWindow( "SDL test", 50, 50, 800, 600, SDL_WINDOW_OPENGL ) );

        if( window == nullptr )
        {
            std::cerr << "Could not create window: " << SDL_GetError() << std::endl;
        }

        SDL_Delay( 3000 );
    }
    catch( EngineException &exception )
    {
        std::cerr << "Engine exception!\n" << exception.what() << std::endl;
    }
    catch( std::exception &exception )
    {
        std::cerr << "Non-engine exception!\n" << exception.what() << std::endl;
    }
    catch( ... )
    {
        std::cerr << "Unknown exception!\n" << std::endl;
    }
    return 0;
}
