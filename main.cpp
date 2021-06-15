#include "App.h"

#include <iostream>

int main()
{
    std::vector<int> v = {15, 18, 7, 1, 5, 10, 15, 11, 7, 2, 3};
    partition(v, 0, v.size() - 1, 7);
    
    for (int i : v)
    {
        std::cout << i << " ";
    }
    return 0;
}