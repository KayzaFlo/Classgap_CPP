#include <iostream>

class Location
{
private:
	std::string			_street_name;
	int					_street_number;
	std::string			_owner_name;

public:
	Location( void );									// Canonical		Constructor Default
	Location( Location const & src );					// Canonical		Contructor Copy
	~Location( void );									// Canonical		Destructor

	Location &		operator=( Location const & rhs );	// Canonical		Surcharge operator =

	std::string		getStreetName( void ) const { return this->_street_name; }
	int				getStreetNumber( void ) const { return this->_street_number; }
	std::string		getOwnerName( void ) const { return this->_owner_name; }
};


Location::Location( void ) {
	std::cout << "Default constructor called\n";
	_street_number = 0;
}

Location::Location( Location const & src ) {
	std::cout << "Copy constructor called\n";
	*this = src;
}

Location::~Location( void ) {
	std::cout << "Destructor called\n";
}

Location &	Location::operator=( Location const & rhs ) {
	std::cout << "Copy assignement operator called\n";
	this->_street_name = rhs.getStreetName();
	this->_street_number = rhs.getStreetNumber();
	this->_owner_name = rhs.getOwnerName();
	return *this;
}