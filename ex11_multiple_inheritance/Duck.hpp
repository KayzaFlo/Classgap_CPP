#ifndef DUCK_H
# define DUCK_H

#include "Walker.hpp"
#include "Swimmer.hpp"


class Duck : public Walker, public Swimmer
{
public:
	Duck(void);
	~Duck(void);
	// void walk(void) const;
	// void swim(void) const;
};



#endif