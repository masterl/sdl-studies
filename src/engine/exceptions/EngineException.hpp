#ifndef ENGINE_EXCEPTIONS_ENGINEEXCEPTION_HPP
#define ENGINE_EXCEPTIONS_ENGINEEXCEPTION_HPP

#include <stdexcept>
#include <string>

class EngineException : public std::runtime_error
{
    public:
    EngineException( std::string const &message )
        : std::runtime_error( message )
    {
    }
};

#endif
