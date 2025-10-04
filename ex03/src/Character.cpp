#include "Character.hpp"

Character::Character(std::string const &name) : name(name)
{
	for (int i = 0; i < 4; i++)
		inv[i] = NULL;
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
	{
		if (inv[i] != NULL)
			delete inv[i];
	}
}

Character::Character(Character const &o) : name(o.name)
{
	for (int i = 0; i < 4; i++)
	{
		if (o.inv[i])
			inv[i] = o.inv[i]->clone();
		else
			inv[i] = NULL;
	}
}

Character &Character::operator=(Character const &o)
{
	if (this != &o)
	{
		name = o.name;
		for (int i = 0; i < 4; i++)
		{
			if (inv[i])
			{
				delete inv[i];
				inv[i] = NULL;
			}
		}
		for (int i = 0; i < 4; i++)
		{
			if (o.inv[i])
				inv[i] = o.inv[i]->clone();
			else
				inv[i] = NULL;
		}
	}
	return *this;
}

std::string const &Character::getName() const
{
	return name;
}

void Character::equip(AMateria *m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (inv[i] == NULL)
		{
			inv[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || inv[idx] == NULL)
		return ;
	inv[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= 4 || inv[idx] == NULL)
		return ;
	inv[idx]->use(target);
}
