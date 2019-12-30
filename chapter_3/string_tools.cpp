#include <iostream>
#include <map>
#include <cstring>
#include <cstdlib>



void string_search(const char* p, const char* a)
{
	int i;

	for(i = 0; a[i] != 0; i++)
	{
		int j;
		for(j = 0; p[j] != 0; j++)
			if(a[i+j] != p[j])
				break;
		if(p[j] == 0)
			std::cout << i << " ";
	}
		
	std::cout << std::endl;
}

void print_chars_table(const char* s)
{
	using namespace std;

	cout << "Source string: " << s << endl;

	map<char, int> m;

	for(int i = 0; s[i] != 0; i++)
		m[s[i]]++;
	
	for(const auto& p : m)
		cout << p.first << " " << p.second << endl; 
}


bool is_a_palindrome(const char* s)
{
	int len = strlen(s);
	char space = ' ';
	int i = 0, j = len - 1;

	while(i <= j)
	{
		while(s[i] == space)
			i++;

		while(s[j] == space)
			j--;

		if(s[i] != s[j])
			break;

		i++;
		j--;
	}

	return i > j;
		
}

int compare(const void* i, const void* j)
{
	return strcmp(*(char**)i, *(char **)j);
}

void sort_string_array()
{
	using namespace std;

	const int Nmax = 1000;
	const int Mmax = 10000;

	char* a[Nmax];
	int N;
	char buf[Mmax];
	int M = 0;

	for(N = 0; N < Nmax; N++)
	{
		a[N] = &buf[M];

		if(!(cin >> a[N]))
			break;

		M += strlen(a[N]) + 1;
	}

	qsort(a, N, sizeof(char*), compare);

	for(int i = 0; i < N; i++)
		cout << a[i] << endl;

}











