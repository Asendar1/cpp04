#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string name;
		AMateria *inv[4];
	public:
		Character(std::string const &name);
		~Character();
		Character(Character const &other);
		Character &operator=(Character const &other);
		std::string const &getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
};
