#ifndef ENGINE_SDL_SDLVERSION_HPP
#define ENGINE_SDL_SDLVERSION_HPP

#include <SDL2/SDL_version.h>
#include <ostream>

class SdlVersion
{
    public:
    SdlVersion( SDL_version const &version );
    SdlVersion( SdlVersion const &other ) = default;

    int const major;
    int const minor;
    int const patch;
};

std::ostream &operator<<( std::ostream &stream, SdlVersion const &version );

#endif
