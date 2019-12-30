#include <iostream>

#include "point.h"

struct pnode
{
	point p;

	pnode* next;

	pnode(point pt, pnode* t)
	{
		p = pt;

		next = t;
	}
};

typedef pnode* plink;

static plink** grid;

static int G, cnt = 0;

static float d;

void gridinsert(float x, float y)
{
	
}

void pr3_20()
{
	int i;
	const int N = 1000000;

	const float d = 0.0001;

	float G = 1/d;

	grid = malloc2d(G+2, G+2);
}
