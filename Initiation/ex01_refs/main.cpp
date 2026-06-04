#include <iostream>

class Point
{
	private:
		int x;
		int y;
	public:
		void Move(int x, int y)
		{
			this->x += x;
			this->y += y;
			std::cout << "Point moved to (" << this->x << ", " << this->y << ")\n";
			// func log
		}
};

int main()
{
	Point point;
	// point.x = 1;
	// point.y = 2;
	point.Move(2, 3);
	return 0;
}