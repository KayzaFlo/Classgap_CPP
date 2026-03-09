# include <iostream>

const int MAX_SIZE = 100;

class Location
{
private:

const std::string	_street_name;
const int			_street_number;
std::string			_owner_name;

public:
	Location( void );									// Canonical		Constructor Default
	Location( std::string addr );
	Location( std::string addr, int number );
	Location( Location const & src );					// Canonical		Contructor Copy
	~Location( void );									// Canonical		Destructor

	Location &		operator=( Location const & rhs );	// Canonical		Surcharge operator =

	std::string		getStreetName( void ) const { return this->_street_name; }
	int				getStreetNumber( void ) const { return this->_street_number; }
	std::string		getOwnerName( void ) const { return this->_owner_name; }
};


Location::Location( void ) : _street_name(""), _street_number(0) {
	std::cout << "Default constructor called\n";
	// _street_name = "";
	// _street_number = 0;
}

Location::Location( std::string addr ) : _street_name(addr), _street_number(0) {
	std::cout << "Constructor with address called\n";
	// _street_name = addr;
	// _street_number = 0;
}
Location::Location( std::string addr, int number ) : _street_name(addr), _street_number(number) {
	std::cout << "Constructor with address called\n";
	// _street_name = addr;
	// _street_number = number;
}

Location::Location( Location const & src ) : _street_name(src.getStreetName()), _street_number(src.getStreetNumber()) {
	std::cout << "Copy constructor called\n";
	*this = src;
}

Location::~Location( void ) {
	std::cout << "Destructor called\n";
}

Location &	Location::operator=( Location const & rhs ) {
	std::cout << "Copy assignement operator called\n";
	// this->_street_name = rhs.getStreetName();
	// this->_street_number = rhs.getStreetNumber();
	this->_owner_name = rhs.getOwnerName();
	return *this;
}

int A();

int sum() {
	return -1;
}

int sum(int a, int b) {
	return a + b;
}

int sum(int a, int b, int c) {
	return a + b + c;
}

int sum(std::string a, std::string b) {
	return 0;
}

int main()
{
	Location loc1;
	Location locA("");
	Location loc2(locA);
	Location loc3;
	loc2 = locA;

	std::cout << sum() << std::endl;
	std::cout << sum(1, 2) << std::endl;
	std::cout << sum(1, 2, 3) << std::endl;
	std::cout << sum("Hello", "World") << std::endl;

	// playerPosition = spawnPosition;
	// playerPosition.x = spawnPosition.x
	// playerPosition.y = spawnPosition.y
	// playerPosition.z = spawnPosition.z
	A();
	return 0;
}


int A() {
	Location loc3;
	return 0;
}