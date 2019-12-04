#include "node.h"
#include "linked_list_tools.h"

#include <cstdlib>
#include <iostream>
#include <random>
#include <ctime>


void insert_sort()
{
	using namespace std;

	srand(time(0));

	const int N = 10;

	node heada(0, 0); //фиктивный ведущий узел
	link a = &heada;
	link t = a;

	//Создаём список из N узлов со случайными значениями [0,999]
	for(int i = 0; i < N; i++)
	{
		t->next = new node(rand() % 1000, 0);
		t = t->next;
	}

	cout << "list a:" << endl;
	print_list(a->next);

	node headb(0, 0);
	link u, x, b = &headb;

	for(t = a->next; t != 0; t = u)		//Проходим по списку a 
	{
		u = t->next;	//Сохраняем ссылку на следующий узел в списке a (т.к. текущий удалится)

		for(x = b; x->next != 0; x = x->next) //Идём по списку b
			if(x->next->item > t->item)		  //Останавливаемся перед узлом, у которого значение больше, чем у вставляемого узла (узел следующий за x)
				break;

		t->next = x->next;		//Вставляем узел t после узла x
		x->next = t;
	}


	cout << "list b:" << endl;
	print_list(b->next);
	

}
