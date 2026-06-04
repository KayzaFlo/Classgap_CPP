#include "Animal.hpp"

Animal::Animal( void ) : _type( "t_Default" ) {}

Animal::Animal( string type ) : _type( type ) {}

Animal::Animal( const Animal &src ) { *this = src; }

Animal::~Animal( void ) {}

Animal &	Animal::operator=( Animal const & rhs ) {
	_type = rhs.getType();
	return *this;
}

void	Animal::makeSound( void ) const {
	cout << "(sound not defined)" << endl;
}

string	Animal::getType( void ) const {
	return _type;
}
