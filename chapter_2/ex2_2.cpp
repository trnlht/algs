#include <iostream>
#include <vector>
#include <chrono>

void ex2_2()
{
	using namespace std;
	
	vector<int> N_arr = {10, 100, 1000};	


	for (int N : N_arr)
	{

		cout << "N = " << N*N*N << endl;

		auto start = chrono::steady_clock::now();	

		int i, j, k, count = 0;

		for(i = 0; i < N; i++)
			for(j = 0; j < N; j++)
				for(k = 0; k < N; k++)
					count++;

		auto diff = chrono::steady_clock::now() - start;

		auto sec = chrono::duration_cast<chrono::microseconds>(diff);

		cout << "count = " << count << endl;
		cout << "time = " << sec.count() << " microseconds" << endl << endl;

	}
}
