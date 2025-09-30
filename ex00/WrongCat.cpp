#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal()
{
    *this = copy;
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat const &rhs)
{
    std::cout << "WrongCat copy assignment called" << std::endl;
    if (this != &rhs)
        this->m_type = rhs.getType();
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "MIAOU" << std::endl;
}
