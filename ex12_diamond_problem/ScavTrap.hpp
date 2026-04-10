#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
protected:
	static int	_baseHealth;
	static int	_baseEnergy;
	static int	_baseAttack;
	
public:
    ScavTrap( void );
    ScavTrap( const string &name );
    ScavTrap( const ScavTrap &src);
    virtual ~ScavTrap( void );

    virtual void	attack( const string &target );
    void			guardGate( void );

};

#endif
