#ifndef NODE_H
#define NODE_H

struct node
{
	int item;

	node* next;

	node(int x, node* t)
	{
		item = x;
		next = t;
	}
};

typedef node* link;


#endif
