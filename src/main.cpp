#include <exception>
#include <iostream>

#include "engine/Engine.hpp"
#include "engine/FilePath.hpp"
#include "engine/exceptions/EngineException.hpp"

int main()
{
    using std::cout;

    // INVESTIGAR:
    // free(): invalid pointer

    // FilePath path{"teste/"};
    //
    // // path.join( "soh_um" );
    //
    // path.join( {"um", "dois", "tres"} );

    return 0;

    try
    {
        Engine engine;

        {
            SdlVersion version = engine.sdl.version_compile_with();
            cout << "Compiled with SDL " << version << '\n';
        }

        {
            SdlVersion version = engine.sdl.version_linked_to();
            cout << "Linked to SDL " << version << '\n';
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
