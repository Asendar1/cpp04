#pragma once

#include <iostream>

class Brain {

	private:
		std::string 	m_ideas[100];
    public:
        Brain();
        Brain(Brain const &copy);
        ~Brain();
        Brain const &operator=(Brain const &rhs);

		std::string const getIdea(int i) const;
		void setIdea(std::string idea, int i);

};
