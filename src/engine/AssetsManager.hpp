#ifndef ENGINE_ASSETSMANAGER_HPP
#define ENGINE_ASSETSMANAGER_HPP

#include <memory>
#include <string>

class AssetsManager;

using AssetsManagerPtr = std::unique_ptr< AssetsManager >;

class AssetsManager
{
    public:
    static AssetsManagerPtr crete_new( char const *const base_path );

    private:
    std::string const base_path;

    AssetsManager( std::string const &base_path );
};

#endif
