#include <iostream>

#include "node.h"
#include "linked_list_tools.h"


void ex3_23()
{
	const int N = 9;

	link t = new node(1, 0);
	t->next = t;

	link x = t;

	for(int i = 2; i <= N; i++)
	{
		x->next = new node(i, t); 
		x = x->next; 
	}

	std::cout << "Cyclic list size is: " << cyclic_list_size(t) << std::endl;
}
