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
        easyfind(v, 5);
        easyfind(v, 10);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}