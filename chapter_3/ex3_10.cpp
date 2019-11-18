#include <iostream>

void ex3_10()
{
	int i, a[99];

	for(i = 0; i < 99; i++)
		a[i] = 98 - i;
	for(i = 0; i < 99; i++)
		a[i] = a[a[i]];

	for(i = 0; i < 99; i++)
		std::cout << a[i] << " ";
	std::cout << std::endl;
}
