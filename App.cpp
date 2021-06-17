#include "App.h"

void partition(std::vector<int>& v, int low, int high, int pivot)
{
	int temp=0;
	int i = low ;

	for (int j = low; j <= high ; j++)
	{
		if (v.at(j) == pivot)
		{
			std::swap(v.at(j), v.at(temp));
			//j++;
			temp++;
		}
		if (v.at(j) < pivot)
		{
			i++;
			std::swap(v.at(i), v.at(j));
		}
	}
	std::swap(v.at(i + 1), v.at(high));
	
}
