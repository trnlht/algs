#include <iostream>
#include <cstdlib>
#include <random>
#include <ctime>

int heads()
{
	return rand() < RAND_MAX/2;
}

void coin_toss()
{
	using namespace std;
	
	srand(time(0));

	int i, j, cnt;

	const int N = 32;
	const int M = 1000;

	int* f = new int[N+1];

	//Инициализация массива 
	for(j = 0; j <= N; j++)
		f[j] = 0;

	//Проводим M экспериментов по N подбрасываний
	for(i = 0; i < M; i++, f[cnt]++)
		for(cnt = 0, j = 0; j <= N; j++)
			if(heads())
				cnt++;

	//Вывод результатов
	for(j = 0; j <= N; j++)
	{
		if(f[j] == 0)
			cout << ".";

		for(i = 0; i < f[j]; i += 10)
			cout << "*";

		cout << endl;
	}
}
