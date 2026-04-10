#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type( "t_WrongDefault" ) {}

WrongAnimal::WrongAnimal( string type ) : _type( type ) {}

WrongAnimal::WrongAnimal( const WrongAnimal &src ) { *this = src; }

WrongAnimal::~WrongAnimal( void ) {}

WrongAnimal &	WrongAnimal::operator=( WrongAnimal const & rhs ) {
	_type = rhs.getType();
	return *this;
}

void	WrongAnimal::makeSound( void ) const {
	cout << "(sound not defined)" << endl;
}

string	WrongAnimal::getType( void ) const {
	return _type;
}
