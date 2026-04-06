#ifndef WALKER_H
# define WALKER_H

class Walker
{
public:
	Walker(void);
	virtual ~Walker(void);
	virtual void walk(void) const;

protected:
	int _legs;
};

#endif
