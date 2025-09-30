#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* brain;
	public:
		Dog();
		~Dog();
		Dog(const Dog &o);
		Dog &operator=(const Dog &o);
		void makeSound() const;
		void setIdea(std::string idea, int i);
		std::string const getIdea(int i) const;
};
