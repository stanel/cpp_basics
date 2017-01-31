#include <exception>

class InvalidOperationException : public std::exception
{
    public:

    InvalidOperationException(const char* message)
    {
        _message = message;
    }

    virtual const char *what() const throw()
    {
        return _message;
    }

    private:

    const char* _message;
};
