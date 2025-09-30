#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const &type) : type(type)
{

}

AMateria::~AMateria()
{

}

AMateria::AMateria(AMateria const &o) : type(o.type)
{

}

AMateria &AMateria::operator=(AMateria const &o)
{
	if (this != &o)
		type = o.type;
	return *this;
}

std::string const &AMateria::getType() const
{
	return type;
}

void AMateria::use(ICharacter &target)
{
	std::cout << "* uses " << type << " on " << target.getName() << " *" << std::endl;
}
