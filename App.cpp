#include "App.h"

void partition(std::vector<int> &v, int low, int high, int pivot)
{
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (v.at(j) < pivot)
        {
            i++;
            std::swap(v.at(i), v.at(j));
        }
    }
    std::swap(v.at(i + 1), v.at(high));
    int temp;
    for (int i = 0;; i++)
    {
        if (pivot < v.at(i))
        {
            temp = i;
            break;
        }
    }
    for (int j = 0; j < v.size(); j++)
    {
        if (v.at(j) == pivot)
        {
            v.insert(v.begin() + temp, v.at(j));
            v.erase(v.begin() + j + 1);
        }
    }
}
