/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:47:47 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/09 13:47:47 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << "AAnimal type constructor called\n";
}

AAnimal::AAnimal(AAnimal const &og)
{
	this->_type = og._type;
	std::cout << "AAnimal copy constructor called\n";
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal destructor called\n";
}

AAnimal &AAnimal::operator=(AAnimal const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

std::string	AAnimal::getType() const
{
	return (this->_type);
}
