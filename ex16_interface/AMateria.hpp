#pragma once

#include "main.hpp"
#include "ICharacter.hpp"

class AMateria
{
protected:
	string	_type;
	string	_color;
/*🔴🟢🔵🟡🟣*/
	
public:
	AMateria( void );
	AMateria( const string & type );
	AMateria( const string & type, const string & color );
	AMateria( const AMateria &src );
	virtual ~AMateria( void );

	AMateria &	operator=( AMateria const & rhs );

	string const &	getType() const;
	string const &	getColor() const;

	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);
	
};
