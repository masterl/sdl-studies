#include "AssetsManager.hpp"

#include "sdl/SdlBasePath.hpp"

AssetsManager::AssetsManager( std::string const &base_path )
    : base_path{base_path}
{
}

AssetsManagerPtr AssetsManager::crete_new( char const *const base_path )
{
}
