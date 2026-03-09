# include <iostream>

# include "point2d.hpp"

Point2D::Point2D( void ) : x(0), y(0) {
	std::cout << "Default constructor called\n";
}

Point2D::Point2D( Point2D const & src ) {
	std::cout << "Copy constructor called\n";
	*this = src;
}

Point2D::~Point2D( void ) {
	std::cout << "Destructor called\n";
}

Point2D &	Point2D::operator=( Point2D const & rhs ) {
	std::cout << "Copy assignement operator called\n";
	this->x = rhs.x;
	this->y = rhs.y;
	return *this;
}

void Point2D::Set(int x, int y) {
	this->x = x;
	this->y = y;
}

int Point2D::GetX() const {
	return this->x;
}

int Point2D::GetY() const {
	return this->y;
}

void Point2D::Print() const {
	std::cout << "Point2D: " << this->x << ", " << this->y << std::endl;
}