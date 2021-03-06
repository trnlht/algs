#include <iostream>
#include "tools.h"

void program1_4()
{

	const int N = 7;

	int i, j, p, q, id[N], sz[N];

	for(i = 0; i < N; ++i)
	{
		id[i] = i;
		sz[i] = 1;
	}

	printArray(id);

	while(std::cin >> p >> q)
	{
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

		std::cout << " " << p << " " << q << std::endl;

		printArray(id);
	}
}
