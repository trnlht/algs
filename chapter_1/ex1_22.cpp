#include <iostream>
#include <random>
#include <ctime>

#include "tools.h"

void ex1_22()
{
	const int N = 1000000;

	int i, j, p, q, id[N], sz[N];

	int unionCount = 0;
	int edgeCount = 0;

	for(i = 0; i < N; ++i)
	{
		id[i] = i;
		sz[i] = 1;
	}

	//printArray(id);

	std::time_t secSinceEpoch = std::time(nullptr);

	std::default_random_engine dre(secSinceEpoch);

	std::uniform_int_distribution<long long> di(0, (N-1));

	while(unionCount != (N-1))
	{
		//Генерируем случайную пару чисел
		p = di(dre);
		q = di(dre);

		edgeCount++;

		//Проходим по ссылкам до корня дерева для каждого эл-та
		//При проходе делаем текущий эл-т ссылающимся на эл-т через один от текущего вверх по дереву, в результате высота дерева уменьшается
		for(i = p; i != id[i]; i = id[i])	//i - идентификатор эл-та, id[i] - ид-р эл-та на который указывает текущий эл-т
			id[i] = id[id[i]];				//id[id[i]] - ид-р эл-та через один от текущего

		for(j = q; j != id[j]; j = id[j])
			id[j] = id[id[j]];

		//Если пришли к одному корню - значит эл-ты уже связаны
		if (i == j)
			continue;

		//Если эл-ты не связаны то проверяем размер деревьев и связываем меньшее с большим
		if(sz[i] < sz[j])
		{
			id[i] = j;
			sz[j] += sz[i];
		}
		else
		{
			id[j] = i;
			sz[i] += sz[j];
		}

		unionCount++;

		//std::cout << " " << p << " " << q << std::endl;

		//printArray(id);
	}

	std::cout << "N = " << N << std::endl;
	std::cout << "unionCount = " << unionCount << std::endl;
	std::cout << "edgeCount = " << edgeCount << std::endl;
}
