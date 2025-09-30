#include "ICharacter.hpp"

ICharacter::ICharacter() : name("default")
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

ICharacter::~ICharacter()
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
	}
}

ICharacter::ICharacter(ICharacter const &o) : name(o.name)
{
	for (int i = 0; i < 4; i++)
	{
		if (o.inventory[i])
			inventory[i] = o.inventory[i]->clone();
		else
			inventory[i] = NULL;
	}
}

ICharacter &ICharacter::operator=(ICharacter const &o)
{
	if (this != &o)
	{
		name = o.name;
		for (int i = 0; i < 4; i++)
		{
			if (inventory[i])
				delete inventory[i];
			if (o.inventory[i])
				inventory[i] = o.inventory[i]->clone();
			else
				inventory[i] = NULL;
		}
	}
	return *this;
}

std::string const &ICharacter::getName() const
{
	return name;
}

