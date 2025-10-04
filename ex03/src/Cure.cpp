#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{

}

Cure::~Cure()
{

}

Cure::Cure(Cure const &o) : AMateria(o)
{

}

Cure& Cure::operator=(Cure const &o)
{
	if (this != &o)
		AMateria::operator=(o);
	return *this;
}

AMateria* Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter &t)
{
	std::cout << "* heals " << t.getName() << "'s wounds *" << std::endl;
}
