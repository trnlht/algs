#include <iostream>

void program1_3()
{
	const int N = 10000;

	int i, j, p, q, id[N], sz[N];

	for(i = 0; i < N; ++i)
	{
		id[i] = i;
		sz[i] = 1;
	}
	while(std::cin >> p >> q)
	{
		//Проходим по ссылкам до корня дерева для каждого эл-та
		for(i = p; i != id[i]; i = id[i]);

		for(j = q; j != id[j]; j = id[j]);

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
	}

}

