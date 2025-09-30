#pragma once

#include <iostream>

class WrongAnimal {

    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &copy);
        virtual ~WrongAnimal();
        WrongAnimal& operator=(WrongAnimal const &rhs);

        void makeSound() const;
        std::string getType() const;

    protected:
        std::string m_type;
};
