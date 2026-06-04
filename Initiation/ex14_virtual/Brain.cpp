#include "Brain.hpp"

Brain::Brain( void ) {
	cout << C_YEL << "<Brain> " << C_WHT;
	for (int i = 0; i < 100; i++)
		_ideas[i] = std::to_string(random());
}

Brain::Brain( const Brain &src ) {
	*this = src;
	cout << C_YEL << "<Brain> " << C_WHT;
}

Brain::~Brain( void ) {
	cout << C_RED << "~Brain " << C_WHT;
}

Brain &	Brain::operator=( Brain const & rhs ) {
	cout << C_YEL << "HARD COPYING BRAIN !!\n" << C_WHT;
	for (int i = 0; i < 100; i++)
		_ideas[i] = rhs._ideas[i];
	return *this;
}

void	Brain::printIdea( int i ) const {
	cout << C_GRY << "Idea %" << i << ": \'" << _ideas[i] << "\'\n" << C_WHT;
}
