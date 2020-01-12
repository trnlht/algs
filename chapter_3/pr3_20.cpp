#include <iostream>

#include "point.h"

//! Узел, содержащий точку
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

//! Указатель на узел, содержащий точку (или связный список таких узлов)
typedef pnode* plink;

//! Двумерный массив связных списков узлов с точками 
static plink** grid;

static int G, cnt = 0;

static float d;

void gridinsert(float x, float y)
{
	
}

/*!
 * Выделяет память под двумерный массив связных списков узлов с точками
 */
plink** malloc2d(int m, int n)
{
	plink** t = new plink*[m];

	for(int i = 0; i < m; i++)
		t[i] = new plink[n];

	return t;
}

void pr3_20()
{
	using namespace std;

	int i;
	const int N = 1000000;

	const float d = 0.0001;

	int G = 1/d;

	grid = malloc2d(G+2, G+2); //(G+2) - размерность сетки 

	for(i = 0; i < (G+2); i++)
		for(int j = 0; j < (G+2); j++)
			grid[i][j] = 0;

	for(i = 0; i < N; i++)
		gridinsert(randFloat(), randFloat());

	cout << cnt << " pairs in radius " << d << endl;

}







