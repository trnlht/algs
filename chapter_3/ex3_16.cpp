#include <iostream>
#include <string>


void ex3_16()
{
	using namespace std;

	const int N = 1000;

	int a[N];

	for(int i = 0; i < N; i++)
		a[i] = 0;

	int in_num = 0;
	int cnt = 0;

	cout << "Enter numbers or q to exit: " << endl;
	while(cin >> in_num)
		a[in_num]++;

	for(int i = 0; i < N; i++)
		if(a[i])
			cnt++;

	cout << "There are " << cnt << " different numbers";


}
