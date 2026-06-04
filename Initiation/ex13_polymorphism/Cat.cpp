#include "Cat.hpp"

Cat::Cat( void ) : Animal( "t_Cat" ) {}

Cat::Cat( const Cat &src ) : Animal( src ) {}

Cat::~Cat( void ) {}

Cat &	Cat::operator=( Cat const & rhs ) {
	_type = rhs.getType();
	return *this;
}

void Cat::makeSound( void ) const {
	cout << "*meow...*" << endl;
}
