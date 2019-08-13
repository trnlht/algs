#include <iostream>

#include "pr1_2.h"


void program1_2()
{
	const int N = 10000;

	int i, j, p, q, id[N];

	//Изначально все эл-ты указывают на себя
	for(i = 0; i < N; i++)
		id[i] = i;
	
	while (std::cin >> p >> q)
	{
		//Проходим по ссылкам до корня дерева для каждого эл-та
		for(i = p; i != id[i]; i = id[i]);

		for(j = q; j != id[j]; j = id[j]);

		//Если пришли к одному корню - значит эл-ты уже связаны
		if (i == j)
			continue;

		//Иначе первый корень прикрепляем ко второму
		id[i] =j;

		std::cout << " " << p << " " << q << std::endl;
	}
}
