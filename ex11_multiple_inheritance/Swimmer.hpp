#ifndef SWIMMER_H
# define SWIMMER_H

#include "Animal.hpp"

class Swimmer
{
public:
	Swimmer(void);
	virtual ~Swimmer(void);
	virtual void swim(void) const;

protected:
	bool _has_fins;
};
#endif
