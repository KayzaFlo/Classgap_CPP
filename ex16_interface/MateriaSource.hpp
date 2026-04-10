#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource 
{
public:
	MateriaSource();
	MateriaSource(const MateriaSource &other);
	MateriaSource &operator=(const MateriaSource &rhs);
	virtual ~MateriaSource();

	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(string const & type);
	virtual void display();

private:
	AMateria*	_inventory[4];

};
