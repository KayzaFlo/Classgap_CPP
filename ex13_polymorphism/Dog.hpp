#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog( void );
	Dog( const Dog &src );
	virtual ~Dog( void );

	Dog &	operator=( Dog const & rhs );
	
	void	makeSound( void ) const;

};

#endif
