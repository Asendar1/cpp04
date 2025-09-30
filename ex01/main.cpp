#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    Animal *animals[10];
    for (int i = 0; i < 5; i++)
        animals[i] = new Dog();
    for (int i = 5; i < 10; i++)
        animals[i] = new Cat();
    for (int i = 0; i < 10; i++)
        delete animals[i];

    Dog *dog = new Dog();
    dog->setIdea("Chase that cat boy", 0);
    std::cout << "Dog idea 0: " << dog->getIdea(0) << std::endl;
    Cat *cat = new Cat();
    cat->setIdea("Climb that tree", 0);
    std::cout << "Cat idea 0: " << cat->getIdea(0) << std::endl;
    delete dog;
    delete cat;
    return 0;
}
