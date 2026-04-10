#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal( "t_WrongCat" ) {}

WrongCat::WrongCat( const WrongCat &src ) : WrongAnimal( src ) {}

WrongCat::~WrongCat( void ) {}

WrongCat &	WrongCat::operator=( WrongCat const & rhs ) {
	_type = rhs.getType();
	return *this;
}

void WrongCat::makeSound( void ) const {
	cout << "*meow...*" << endl;
}
