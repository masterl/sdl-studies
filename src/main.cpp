#include <exception>
#include <iostream>

#include "engine/SDLBase.hpp"
#include "engine/exceptions/EngineException.hpp"

int main()
{
    try
    {
        SDLBase base;

        {
            SdlVersion version = base.version_compile_with();
            std::cout << version << '\n';
        }

        {
            SdlVersion version = base.version_linked_to();
            std::cout << version << '\n';
        }
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
