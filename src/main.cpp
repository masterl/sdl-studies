#include <exception>
#include <iostream>

#include "engine/Engine.hpp"
#include "engine/exceptions/EngineException.hpp"

int main()
{
    try
    {
        Engine engine;

        {
            SdlVersion version = engine.sdl.version_compile_with();
            std::cout << "Compiled with SDL " << version << '\n';
        }

        {
            SdlVersion version = engine.sdl.version_linked_to();
            std::cout << "Linked to SDL " << version << '\n';
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
