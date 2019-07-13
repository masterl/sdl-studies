#include "SdlVersion.hpp"

SdlVersion::SdlVersion( SDL_version const &version )
    : major{version.major}
    , minor{version.minor}
    , patch{version.patch}
{
}

std::ostream &operator<<( std::ostream &stream, SdlVersion const &version )
{
    stream << version.major << '.' << version.minor << '.' << version.patch;

    return stream;
}
