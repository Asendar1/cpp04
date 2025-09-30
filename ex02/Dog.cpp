#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &o) : Animal(o)
{
	brain = new Brain(*o.brain);
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &o)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	delete brain;
	brain = new Brain(*o.brain);
	if (this != &o)
		Animal::operator=(o);
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}

void Dog::setIdea(std::string idea, int i)
{
	if (i < 0 || i > 99)
	{
		std::cout << "There is only 100 ideas" << std::endl;
		return ;
	}
	brain->setIdea(idea, i);
}

std::string const Dog::getIdea(int i) const
{
	if (i < 0 || i > 99)
	{
		std::cout << "There is only 100 ideas" << std::endl;
		return "";
	}
	return brain->getIdea(i);
}
