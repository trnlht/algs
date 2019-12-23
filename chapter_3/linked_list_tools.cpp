#include <iostream>
#include <random>
#include <ctime>

#include "node.h"


int cyclic_list_size(link x)
{
	link begin = x;

	int cnt = 1;

	while(x->next != begin)
	{
		x = x->next;
		cnt++;
	}

	return cnt;
}

link reverse(link x)
{
	link t; 		//t указывает на следующий за x узел
	link y = x;		//y указывает на текущий узел движется вперёд по списку до тех пор, пока не дойдёт до конца
	link r = 0;		//r указывает на уже обращённую часть списка, вначале она равна нулю

	while(y != 0) //Последний узел списка указывает на 0
	{
		t = y->next; //Сохраняем ссылку на следующий после y узел в t
		y->next = r; //"Обращаем" (разворачиваем) узел y, сделав его указывающим на обращённую часть списка
		r = y;		 //r теперь указывает на только что обращённый узел
		y = t;		 //y переходит на следующий узел
	}

	return r;
}


void print_list(link x)
{
	using namespace std;

	link t = x;

	while(t != 0)
	{
		cout << t->item << " ";
		t = t->next;
	}

	cout << endl;
}

link create_list(int N)
{
	link first = new node(1, 0);
	link x, t;

	x = first;

	for(int i = 2; i <=N; i++)
	{
		t = new node(i, 0);
		x->next = t;
		x = x->next;
	}		

	return first;
}

link create_random_list_with_head(int N)
{
	srand(time(0));

	link head = new node(0, 0);
	link x = head;

	for(int i = 0; i < N; i++)
	{
		link t = new node(rand() % 1000, 0);
		x->next = t;
		x = x->next;
	}

	return head;
}


void max_to_end(link head)
{
	int maxValue = -1;
	link maxNode = 0;
	link beforeMaxNode = 0;
	link y;

	for(y = head; y->next != 0; y = y->next)	
	{
		if(y->next->item > maxValue)
		{
			beforeMaxNode = y;
			maxNode = y->next;
			maxValue = maxNode->item;
		}
	}

	//После прохода y указывает на последний узел
	//Удаляем максимальный узел и вставляем его в конец, если он не последний (если последний - ничего не делаем)
	if(maxNode->next != 0)
	{
		beforeMaxNode->next = beforeMaxNode->next->next;
		y->next = maxNode;
		maxNode->next = 0;

	}
}

void delete_all_nodes(link x)
{
	link t = x;		//Текущий узел
	link p = 0;		//Следующий узел

	while(t != 0)
	{
		p = t->next;
		std::cout << "Deleting node with value: " << t->item << std::endl;
		delete t;
		t = p;
	}
	
}

//-----------------------------------TESTS--------------------------------------------
//------------------------------------------------------------------------------------

void reverse_test()
{
	link L = create_list(5);

	std::cout << "Source list:" << std::endl;

	print_list(L);

	link R = reverse(L);

	std::cout << "Reversed list:" << std::endl;

	print_list(R);

}

void max_to_end_test()
{
	using namespace std;

	link a = create_random_list_with_head(10);
	
	cout << "List a:" << endl;

	print_list(a->next);

	max_to_end(a);

	cout << "List a with max in the end:" << endl;

	print_list(a->next);
}

void delete_all_nodes_test()
{
	link a = create_list(3);

	std::cout << "List a:" << std::endl;

	print_list(a);

	delete_all_nodes(a);
}




















