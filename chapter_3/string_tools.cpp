#include <iostream>
#include <map>
#include <cstring>



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

		//std::cout << "s[i] = " << s[i] << " s[j] = " << s[j] << std::endl;

		if(s[i] != s[j])
			break;

		i++;
		j--;
	}

	return i > j;
		
}

