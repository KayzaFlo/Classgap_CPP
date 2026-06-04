#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	// ScavTrap	st("ST");
	DiamondTrap	dt("DT");
	dt.attack("Monster");
	dt.takeDamage(3);
	dt.beRepaired(5);
	dt.guardGate();
	dt.highFivesGuys();
	dt.whoAmI();
	dt.takeDamage(300);
	dt.attack("Monster");
	dt.whoAmI();
	std::cout << std::endl;

	return 0;
}
