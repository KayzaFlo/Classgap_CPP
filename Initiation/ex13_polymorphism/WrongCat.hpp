#ifndef WRONGCAT_H
# define WRONGCAT_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat( void );
	WrongCat( const WrongCat &src );
	virtual ~WrongCat( void );

	WrongCat &	operator=( WrongCat const & rhs );
	
	void	makeSound( void ) const;
	
};

#endif
