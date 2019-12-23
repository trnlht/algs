#include <iostream>

#include "ex3_1.h"
#include "eratosphenes_sieve.h"
#include "coin_toss.h"
#include "pairs_in_radius.h"
#include "ex3_10.h"
#include "ex3_12.h"
#include "ex3_16.h"
#include "josephus_problem.h"
#include "ex3_23.h"
#include "linked_list_tools.h"
#include "insert_sort.h"
#include "string_tools.h"

int lg(int N)
{
	int i = 0;

	for(i = 0; N > 1; i++, N /= 2);

	return i;
}

void lg_test()
{
	using namespace std;

	cout << "lg(1) = " << lg(1) << endl;
	cout << "lg(2) = " << lg(2) << endl;
	cout << "lg(4) = " << lg(4) << endl;
	cout << "lg(8) = " << lg(8) << endl;
	cout << "lg(16) = " << lg(16) << endl;

}

int main()
{
	const char* s = "abcdef";
	std::cout << "Source string :" << s << std::endl;
	std::cout << "Palindrome: " << (is_a_palindrome(s) ? "True" : "False") << std::endl;
}
 	
