#ifndef ENGINE_FILEPATH_HPP
#define ENGINE_FILEPATH_HPP

#include <initializer_list>
#include <iostream>
#include <string>

class FilePath
{
    public:
    FilePath( std::string const &path );

    FilePath join( std::initializer_list< std::string > subpaths );

    private:
    std::string const path;
};

#endif
