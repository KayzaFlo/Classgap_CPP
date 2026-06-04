# include <iostream>
# include <cassert>

# include "point2d.hpp"

int main()
{
	Point2D a;

	
	a.Set(4, 2);
	a.Print();

	
	Point2D const c;
	// c.Set(1, 1);
	c.Print();

	Point2D b(c);
	b.Set(2, 2);
	b.Print();

	const Point2D d(b);
	// d = b;

}
