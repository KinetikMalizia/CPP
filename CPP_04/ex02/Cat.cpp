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

Cat::Cat(Cat &og) : AAnimal(og.getType())
{
		this->_brain = new Brain(*og._brain);
		std::cout << "Cat copy constructor called\n";
}

Cat::Cat(void): AAnimal("Cat")
{
	this->_brain = new Brain();
	std::cout << "Cat default constructor called\n";
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor called\n";
}

Cat	&Cat::operator=(Cat &rhs)
{
	this->_type = rhs._type;
	this->_brain = rhs._brain;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << this->_type << ": !!!Mighty Roar!!!\n";
}

void	Cat::setIdea(int i, std::string val)
{
	this->_brain->setIdea(i, val);
}

std::string	Cat::getIdea(int i)
{
	return (this->_brain->getIdea(i));
}