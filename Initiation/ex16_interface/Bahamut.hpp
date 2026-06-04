#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Bahamut : public AMateria
{
public:
	Bahamut();
	Bahamut(const Bahamut &other);
	Bahamut &operator=(const Bahamut &rhs);
	~Bahamut();

	virtual AMateria*	clone() const;
	virtual void		use(ICharacter& target);

private:

};
