#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		~Cat();
		Cat(const Cat &o);
		Cat &operator=(const Cat &o);
		void makeSound() const;
};
