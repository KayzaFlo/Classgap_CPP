#ifndef DOG_H
# define DOG_H

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
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
