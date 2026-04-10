#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	string	_name;

public:
    DiamondTrap( void );
    DiamondTrap( const string &name );
    DiamondTrap( const DiamondTrap &src );
    virtual ~DiamondTrap( void );

    virtual void	attack( const string &target );
    void			whoAmI( void );

};

#endif
