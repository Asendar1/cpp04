#pragma once

#include <iostream>
#include "AMateria.hpp"

class ICharacter
{
	protected:
		AMateria* inventory[4];
		std::string name;

	public:
		ICharacter();
		virtual ~ICharacter();
		ICharacter(ICharacter const &other);
		ICharacter &operator=(ICharacter const &other);
		virtual std::string const &getName() const = 0;
		virtual void equip(AMateria *m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter &target) = 0;
};
