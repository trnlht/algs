#include "node.h"
#include <iostream>


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

void reverse_test()
{
	link L = create_list(5);

	std::cout << "Source list:" << std::endl;

	print_list(L);

	link R = reverse(L);

	std::cout << "Reversed list:" << std::endl;

	print_list(R);

}






















