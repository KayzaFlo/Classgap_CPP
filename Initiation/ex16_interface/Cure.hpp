#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure &other);
	Cure &operator=(const Cure &rhs);
	~Cure();

	virtual AMateria*	clone() const;
	virtual void		use(ICharacter& target);

private:

};
