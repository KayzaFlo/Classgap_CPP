#ifndef ENTITY_HPP
#define ENTITY_HPP

#include <iostream>
#include <string>

#include "World.hpp"

class World;

enum class EntityType {
	Grass,
	Sheep,
	Wolf,
	Salt,
	Null
};

class Entity
{
	protected:
		std::string name;
		const EntityType type;
		int x;
		int y;
		static int idCounter;
		bool isAlive = true;

	public:
		Entity();
		Entity(int x, int y, EntityType type);
		virtual ~Entity();

		int getX() const;
		int getY() const;
		std::string getName() const;
		EntityType getType() const { return type; }	
		bool getIsAlive() const { return isAlive; }
		void setPos(int newX, int newY);

		virtual void ExecuteTurn(World* grid) = 0;
};

#endif 