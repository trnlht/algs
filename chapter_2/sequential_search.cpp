#include <iostream>

#include "sequential_search.h"


int sequential_search(int a[], int v, int l, int r)
{
	for(int i = l; i <=r; i++)
		if(v == a[i])
			return i;
	return -1;
}

void sequential_search_test()
{
	int a[10] = {0, 1, 2, 5, 3, 6, 1, 2, 8, 4};

	std::cout << "Index of 6 is: " << sequential_search(a, 6, 0, 9) << std::endl;
}
