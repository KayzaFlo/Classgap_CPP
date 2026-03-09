# include <iostream>

class Point2D
{
private:
	int x;	
	int y;

public :
	Point2D( void );									// Canonical		Constructor Default
	Point2D( Point2D const & src );					// Canonical		Contructor Copy
	~Point2D( void );									// Canonical		Destructor

	Point2D &		operator=( Point2D const & rhs );	// Canonical		Surcharge operator =

	void Set(int, int);
	int GetX() const;
	int GetY() const;
	void Print() const;
};
