#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{

}

Ice::~Ice()
{

}

Ice::Ice(Ice const &o) : AMateria(o)
{

}

Ice& Ice::operator=(Ice const &o)
{
	if (this != &o)
		AMateria::operator=(o);
	return *this;
}

AMateria* Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter &t)
{
	std::cout << "* shoots an ice bolt at " << t.getName() << " *" << std::endl;
}
