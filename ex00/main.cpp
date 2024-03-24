#include "easyfind.hpp"

# include <vector>
# include <iostream>

int main()
{
    std::vector<int> v;
    for (int i = 0; i < 10; i++)
        v.push_back(i);
    try
    {
        std::vector<int>::iterator it = easyfind(v, 5);
        std::cout << *it << std::endl;
        it++;
        std::cout << *it << std::endl;
        easyfind(v, 10);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}