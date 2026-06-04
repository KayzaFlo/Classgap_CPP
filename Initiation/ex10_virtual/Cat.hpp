#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat(void);
	~Cat(void);
	void speak(void) const;
};

#endif
