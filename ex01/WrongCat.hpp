#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:
    WrongCat();
    WrongCat(const WrongCat &copy);
    virtual ~WrongCat();
    WrongCat& operator=(WrongCat const &rhs);

    virtual void makeSound() const;
};
