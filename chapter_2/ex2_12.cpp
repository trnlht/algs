#include <iostream>
#include <cmath>


double harmonic(int n)
{
	return log(n) + 0.57721 + (1.0 / (12.0*n));;
}

void ex2_12()
{
	using namespace std;
	
	for(int i = 1; i <= 10; ++i)
		cout << "Harmonic number " << i << ": " << harmonic(i) << endl;
}
