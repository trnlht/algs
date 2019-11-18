#include <cstdlib>
#include <iostream>
#include <random>

#include "point.h"

float randFloat()
{
	return 1.0*rand()/RAND_MAX;
}

void pairs_in_radius()
{
	using namespace std;

	srand(time(0));
	
	const float d = 0.01;
	const int N = 1000;

	int i, cnt = 0;

	point* a = new point[N];

	for(i = 0; i < N; i++)
	{
		a[i].x = randFloat();
		a[i].y = randFloat();
	}

	for(i = 0; i < N; i++)
		for(int j = i + 1; j < N; j++)
			if(distance(a[i], a[j]) < d)
				cnt++;
	
	cout << "Pairs in radius " << d << ": " << cnt << endl;
}
