#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"


class Dog : public Animal
{
public:
	Dog(void);
	~Dog(void);
	void speak(void) const;
};

#endif