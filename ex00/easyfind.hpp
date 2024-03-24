#ifndef EASYFIND_H
#define EASYFIND_H

#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &container, int n)
{
    class Exception : public std::exception
    {
        virtual const char *what() const throw()
        {
            return "Element not found";
        }
    };
    typename T::iterator it = std::find(container.begin(), container.end(), n);
    if (it == container.end())
        throw Exception();  
    else
        return it; 
}

#endif