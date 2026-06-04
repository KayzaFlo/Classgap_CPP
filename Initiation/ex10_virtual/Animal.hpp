#ifndef ANIMAL_H
# define ANIMAL_H

class Animal
{
public:
	Animal(void);
	virtual ~Animal(void);
	virtual void speak(void) const;
};

#endif
