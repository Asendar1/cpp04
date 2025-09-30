#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &o) : Animal(o)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &o)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &o)
		Animal::operator=(o);
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
