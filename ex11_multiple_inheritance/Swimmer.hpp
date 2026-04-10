#ifndef SWIMMER_H
# define SWIMMER_H

class Swimmer
{
public:
	Swimmer(void);
	virtual ~Swimmer(void);
	virtual void swim(void) const;
	virtual void move(void) const;


protected:
	bool _has_fins;
};
#endif
