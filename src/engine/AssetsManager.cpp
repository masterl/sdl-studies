#include "AssetsManager.hpp"

// #include <boost/filesystem.hpp>

#include "sdl/SdlBasePath.hpp"

// using bfs = boost::filesystem;

AssetsManager::AssetsManager( std::string const &assets_folder_path )
    : assets_folder_path{assets_folder_path}
{
}

AssetsManagerPtr AssetsManager::crete_new( std::string const &assets_folder_path )
{
    return std::unique_ptr< AssetsManager >( new AssetsManager( assets_folder_path ) );
}
