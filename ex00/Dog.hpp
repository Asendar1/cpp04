#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		Dog(const Dog &o);
		Dog &operator=(const Dog &o);
		void makeSound() const;
};
