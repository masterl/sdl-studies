#include "FilePath.hpp"

FilePath::FilePath( std::string const &path )
    : path{path}
{
}

FilePath FilePath::join( std::initializer_list< std::string > subpaths )
{
    for( auto it{subpaths.begin()}; it != subpaths.end(); ++it )
    {
        std::cout << *it << std::endl;
    }
}
