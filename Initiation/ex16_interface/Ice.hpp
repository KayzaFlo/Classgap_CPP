#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice &other);
	Ice &operator=(const Ice &rhs);
	~Ice();

	virtual AMateria*	clone() const;
	virtual void		use(ICharacter& target);

private:

};
