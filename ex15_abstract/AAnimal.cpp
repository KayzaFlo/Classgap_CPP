#include "AAnimal.hpp"

AAnimal::AAnimal( void ) : _type( "t_Default" ) {
	cout << C_CYA << "<AAnimal> " << C_WHT;
}

AAnimal::AAnimal( string type ) : _type( type ) {
	cout << C_CYA << "<AAnimal(Typed)> " << C_WHT;
}

AAnimal::AAnimal( const AAnimal &src ) {
	*this = src;
	cout << C_CYA << "<AAnimal(Copy)> " << C_WHT;
}

AAnimal::~AAnimal( void ) {
	cout << C_RED << "~AAnimal " << C_WHT;
}

AAnimal &	AAnimal::operator=( AAnimal const & rhs ) {
	_type = rhs.getType();
	return *this;
}

void	AAnimal::makeSound( void ) const {
	cout << "(sound not defined)" << endl;
}

string	AAnimal::getType( void ) const {
	return _type;
}
