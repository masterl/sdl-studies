#include "Engine.hpp"

#include "sdl/SdlBasePath.hpp"

#include <iostream>

Engine::Engine()
{
    initialize_assets_manager();
}

void Engine::initialize_assets_manager()
{
    SdlBasePath base_path;

    base_path.reset( SDL_GetBasePath() );
    if( base_path == nullptr )
    {
        throw SDLException( "Couldn't determine base path!" );
    }

    std::string assets_folder_path{base_path.get()};

    assets_folder_path += "/assets";

    std::cout << "assets_folder_path " << assets_folder_path << '\n';

    assets_manager = AssetsManager::crete_new( assets_folder_path );
}
