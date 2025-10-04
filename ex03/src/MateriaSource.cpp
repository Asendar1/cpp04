#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		src[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (src[i] != NULL)
			delete src[i];
	}
}

MateriaSource::MateriaSource(MateriaSource const &o)
{
	for (int i = 0; i < 4; i++)
	{
		if (o.src[i])
			src[i] = o.src[i]->clone();
		else
			src[i] = NULL;
	}
}

MateriaSource &MateriaSource::operator=(MateriaSource const &o)
{
	if (this != &o)
	{
		for (int i = 0; i < 4; i++)
		{
			if (src[i])
			{
				delete src[i];
				src[i] = NULL;
			}
		}
		for (int i = 0; i < 4; i++)
		{
			if (o.src[i])
				src[i] = o.src[i]->clone();
			else
				src[i] = NULL;
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
	for(int i = 0; i < 4; i++)
	{
		if (src[i] == NULL)
		{
			src[i] = m;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (src[i] && src[i]->getType() == type)
			return src[i]->clone();
	}
	return NULL;
}
