#include "App.h"

#include <gtest/gtest.h>

TEST(Test, less_then_pivot)
{
    std::vector<int> v = {15, 18, 7, 1, 5, 10, 15, 11, 7, 2, 3};
    uint32_t pivot = 7;
    uint32_t temp;
    partition(v, 0, v.size() - 1, pivot);
    for (uint32_t i = 0; i < v.size(); i++)
    {
        if (v.at(i) >= pivot)
        {
            temp = i - 1;
            break;
        }
    }
    for (uint32_t i = 0; i < temp; i++)
    {
        EXPECT_LT(v.at(i), pivot);
    }
}
TEST(Test, more_then_pivot)
{
    std::vector<int> v = {15, 18, 7, 1, 5, 10, 15, 11, 7, 2, 3};
    uint32_t pivot = 7;
    uint32_t temp;
    partition(v, 0, v.size() - 1, pivot);
    for (uint32_t i = 0; i < v.size(); i++)
    {
        if (v.at(i) < pivot)
        {
            temp = i - 1;
            break;
        }
    }
    for (uint32_t i = temp; i < v.size(); i++)
    {
        EXPECT_GT(v.at(i), pivot);
    }
}
