#include "Dog.hpp"

Dog::Dog( void ) : Animal( "t_Dog" ) {}

Dog::Dog( const Dog &src ) : Animal( src ) {}

Dog::~Dog( void ) {}

Dog &	Dog::operator=( Dog const & rhs ) {
	_type = rhs.getType();
	return *this;
}

void Dog::makeSound( void ) const {
	cout << "*barf!*" << endl;
}
