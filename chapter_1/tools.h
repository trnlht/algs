#ifndef H_TOOLS
#define H_TOOLS

#include <algorithm>
#include <iterator>

template <typename T, std::size_t N>
void printArray(T (&array)[N])
{
	using namespace std;

	copy(begin(array), end(array), ostream_iterator<T>(cout, " "));

	cout << endl;
}

#endif
