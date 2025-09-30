#pragma once

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &o);
		Animal &operator=(const Animal &o);
		virtual void makeSound() const;
		std::string getType() const;
};
