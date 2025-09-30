#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
    *this = copy;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &rhs)
{
    std::cout << "WrongAnimal copy assignment called" << std::endl;
    if (this != &rhs)
        this->m_type = rhs.getType();
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "A WrongAnimal make a sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return m_type;
}
