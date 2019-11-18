#include <iostream>

#include "pr1_1.h"

#include "tools.h"

void program1_1()
{

	using namespace std;

	const int N = 7;

	int i, p, q, id[N];

	for (i = 0; i < N; i++)
		id[i] = i;

	printArray(id);

	while(cin >> p >> q)
	{
		int t = id[p];

		if(t == id[q])
			continue;

		for(i = 0; i < N; i++)
			if(id[i] == t)
				id[i] = id[q];

		printArray(id);

		cout << " " << p << " " << q << endl;
	}
}
