#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* brain;
	public:
		Cat();
		~Cat();
		Cat(const Cat &o);
		Cat &operator=(const Cat &o);
		void makeSound() const;
		void setIdea(std::string idea, int i);
		std::string const getIdea(int i) const;
};
