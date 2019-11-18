#include <iostream>


int binary_search(int a[], int v, int l, int r)
{
	while(r >= l)
	{
		int m = (l + r)/2;
		if(v == a[m])
			return m;

		if(v < a[m])
			r = m - 1;
		else
			l = m + 1;
	}

	return -1;
}

void binary_search_test()
{
	int a[10] = {1, 4, 6, 12, 32, 41, 65, 66, 75, 99};

	std::cout << "Binary search result: " << binary_search(a, 12, 0, 9) << std::endl; 
}

