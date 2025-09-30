#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &o) : Animal(o)
{
	brain = new Brain(*o.brain);
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &o)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	delete brain;
	brain = new Brain(*o.brain);
	if (this != &o)
		Animal::operator=(o);
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

void Cat::setIdea(std::string idea, int i)
{
	if (i < 0 || i > 99)
	{
		std::cout << "There is only 100 ideas" << std::endl;
		return ;
	}
	brain->setIdea(idea, i);
}

std::string const Cat::getIdea(int i) const
{
	if (i < 0 || i > 99)
	{
		std::cout << "There is only 100 ideas" << std::endl;
		return "";
	}
	return brain->getIdea(i);
}
