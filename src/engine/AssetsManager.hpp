#ifndef ENGINE_ASSETSMANAGER_HPP
#define ENGINE_ASSETSMANAGER_HPP

#include <memory>
#include <string>
#include <unordered_map>
#include <vector>

class AssetsManager;

using AssetsManagerPtr = std::unique_ptr< AssetsManager >;

class AssetsManager
{
    public:
    static AssetsManagerPtr crete_new( std::string const &assets_folder_path );

    private:
    std::string const assets_folder_path;
    std::unordered_map< std::string, std::vector< std::string > > images;
    std::unordered_map< std::string, std::vector< std::string > > sounds;

    AssetsManager( std::string const &base_path );
};

#endif
