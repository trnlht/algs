#include <iostream>


void ex3_12()
{
	//const int N = 1000;

	int n_arr[] = {1000, 10000, 100000, 1000000};
	//int n_arr[] = {100000, 1000000};

	int i;

	for(int N : n_arr)
	{
		int* a = new int[N];
		int cnt = 0;

		//Инициализация
		for(i = 2; i < N; i++)
			a[i] = 1;

		for(i = 2; i < N; i++)
			if(a[i])
				for(int j = i; j*i < N && j*i > 0; j++)
					a[i*j] = 0;

		//Считаем количество простых чисел
		for(i = 2; i < N; i++)
			if(a[i])
				cnt++;

		std::cout << "N = " << N << " cnt = " << cnt << std::endl;

		delete[] a;
	}
}
