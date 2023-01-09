#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
}

WrongAnimal::WrongAnimal( WrongAnimal const & src ) {
	*this = src;
}

WrongAnimal::~WrongAnimal( void ) {
}

WrongAnimal	&WrongAnimal::operator=( WrongAnimal const & src ) {
	return (*this);
}

void	WrongAnimal::set_type( std::string const value ) {
	this->_type = value;
}

std::string	WrongAnimal::get_type( void ) const {
	return (this->_type);
}

