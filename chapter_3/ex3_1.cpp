#include <iostream>
#include <limits>

void ex3_1()
{
	using namespace std;
	cout << "short: " << numeric_limits<short>::min() << " " << numeric_limits<short>::max() << endl;
	cout << "int: " << numeric_limits<int>::min() << " " << numeric_limits<int>::max() << endl;
	cout << "long: " << numeric_limits<long>::min() << " " << numeric_limits<long>::max() << endl;
	cout << "float: " << numeric_limits<float>::lowest() << " " << numeric_limits<float>::max() << endl;
	cout << "double: " << numeric_limits<double>::lowest() << " " << numeric_limits<double>::max() << endl;
}

