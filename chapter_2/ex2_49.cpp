#include "sequential_search.h"
#include <iostream>
#include <random>
#include <ctime>
#include <climits>

void ex2_49()
{
	using namespace std;
	
	int m_array[] = {10, 100, 1000, 10000, 100000, 1000000};
	int n_array[] = {10, 100, 1000, 10000, 100000, 1000000};

	time_t secSinceEpoch = time(nullptr);

	default_random_engine dre(secSinceEpoch);

//	uniform_int_distribution<int> di(0, INT_MAX);

	for(int m : m_array)
	{
		uniform_int_distribution<int> di(0, INT_MAX);

		int* arr = new int[m];
		for(int i = 0; i < m; ++i)
			arr[i] = i;

		for(int n : n_array)
		{
			cout << "M = " << m << endl;
			cout << "N = " << n << endl;

			int cnt = 0;

			for(int i = 0; i < n; ++i)
			{
				int num = di(dre);
				
				if(sequential_search(arr, num, 0, m - 1) != -1)
					cnt++;
			}

			cout << "cnt = " << cnt << endl << endl;
		}
	}

}
