#include <exception>
#include <iostream>

#include "engine/SDLBase.hpp"
#include "engine/exceptions/EngineException.hpp"

int main()
{
    try
    {
        SDLBase base;
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
