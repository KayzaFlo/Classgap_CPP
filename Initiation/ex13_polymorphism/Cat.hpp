#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat( void );
	Cat( const Cat &src );
	virtual ~Cat( void );

	Cat &	operator=( Cat const & rhs );
	
	void	makeSound( void ) const;
	
};

#endif
