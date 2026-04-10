#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain	*_brain;

public:
	Dog( void );
	Dog( const Dog &src );
	virtual ~Dog( void );

	Dog &	operator=( Dog const & rhs );
	
	virtual void	makeSound( void ) const;
	void	printIdeas( int i ) const;

};

#endif
