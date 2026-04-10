#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap(), _name("defaultDT") {
	cout << C_YEL << "  > DiamondTrap \'" << _name << "\' Default constructor called! <" << C_WHT << endl;
}

DiamondTrap::DiamondTrap( const string &name ) : ClapTrap( name + "_clap_trap" ), _name(name) {
	cout << C_YEL << "  > DiamondTrap \'" << _name << "\' Named constructor called! <" << C_WHT << endl;
	_health = FragTrap::_baseHealth;
	_energy = ScavTrap::_baseEnergy;
	_attack = FragTrap::_baseAttack;
}

DiamondTrap::DiamondTrap( const DiamondTrap &src) : ClapTrap( src ), ScavTrap( src ), FragTrap( src ) {
	*this = src;
	cout << C_YEL << "  > DiamondTrap \'" << _name << "\' Copy constructor called! <" << C_WHT << endl;
}

DiamondTrap::~DiamondTrap( void ) {
	cout << C_RED << "  ~ DiamondTrap \'" << _name << "\' Destructor called! ~" << C_WHT << endl;
}

void	DiamondTrap::attack( const string& target ) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI( void ) {
	if (!isActive())
		return;
	std::cout << "\'" << ClapTrap::_name << "\' who am I ? I'm \'" << _name << "\'!!" << std::endl;
	updateStatus(0, -1);
}
