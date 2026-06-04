# include <iostream>

class Location
{
private:
	std::string			_street_name;

public :
	Location ( void ) {
		std::cout << "Constructor :" << this << std::endl;
	};
	~ Location ( void ) {
		std::cout << "Destructor :" << this << std::endl;
	};
};

// Location::Location << ( ) {
// 	std::cout << "PRINT :" << _street_name << std::endl;
// }

int main()
{
	Location A;
	Location * addrA;
	addrA = &A;
	std::cout << "MAIN :" << addrA << std::endl;

	Location B;
	return 0;
}
