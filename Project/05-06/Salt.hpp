#ifndef Salt_HPP
#define Salt_HPP

#include <iostream>
#include <string>
#include "Entity.hpp"

class Salt : public Entity
{

	public:
		Salt(int x, int y);
		~Salt();

		void ExecuteTurn(World* grid);
};	

#endif