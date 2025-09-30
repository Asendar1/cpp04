#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    std::cout << std::endl;
    const WrongAnimal* beta = new WrongAnimal();
    const WrongAnimal* l = new WrongCat();
    std::cout << l->getType() << " " << std::endl;
    l->makeSound();
    beta->makeSound();

    delete meta;
    delete i;
    delete j;
    delete beta;
    delete l;

    return 0;
}
