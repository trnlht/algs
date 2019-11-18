#include "point.h"
#include <cmath>


float distance(const point& a, const point& b)
{
	float dx = a.x - b.x;
	float dy = a.y - b.y;

	return sqrt(dx*dx + dy*dy);
}
