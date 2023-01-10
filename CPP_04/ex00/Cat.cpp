/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:47:54 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/09 13:47:54 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(Cat &og) : Animal(og.getType())
{
		this->_type = og.getType();
		std::cout << "Cat copy constructor called\n";
}

Cat::Cat(void): Animal("Cat")
{
	this->_type = "Cat";
	std::cout << "Cat default constructor called\n";
}

Cat::~Cat()
{
	std::cout << "Cat destructor called\n";
}

Cat	&Cat::operator=(Cat &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << this->_type << ": !!!Mighty Roar!!!\n";
}