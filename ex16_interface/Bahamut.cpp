#include "Bahamut.hpp"

Bahamut::Bahamut() : AMateria( "bahamut", "🔴" ) {
	cout << C_GRN << "<Bahamut> " << C_WHT;
}

Bahamut::Bahamut(const Bahamut &other) : AMateria( other ) {
	cout << C_GRN << "<Bahamut>(Copy) " << C_WHT;
	*this = other;
}

Bahamut::~Bahamut() {
	cout << C_RED << "~Bahamut " << C_WHT;
}

Bahamut &Bahamut::operator=(const Bahamut &rhs) {
	(void)rhs;
	return *this;
}

AMateria*	Bahamut::clone() const {
	return new Bahamut;
}

void		Bahamut::use(ICharacter& target) {
	cout << "* cast " << C_BOL << C_RED << "MEGA FLARE" << C_WHT << " against " << C_CYA << "[" << target.getName() << "]" << C_WHT << " *\n";
}
