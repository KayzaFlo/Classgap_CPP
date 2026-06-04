#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain	*_brain;

public:
	Cat( void );
	Cat( const Cat &src );
	virtual ~Cat( void );

	Cat &	operator=( Cat const & rhs );
	
	virtual void	makeSound( void ) const;
	void	printIdeas( int n ) const;
	
};

#endif
