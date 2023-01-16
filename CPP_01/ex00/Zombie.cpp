/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:22:26 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/16 10:28:07 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name)
{
	std::cout << _name << ": named constructor called\n";
}

Zombie::Zombie()
{
	std::cout << "regular constructor called\n";
	return;
}

Zombie::~Zombie()
{
	std::cout << _name << ": has been destroyed\n";
	return ;
}

void	Zombie::announce() const
{
	std::cout << _name << ":  BraiiiiiiinnnzzzZ...\n";
	return ;
}

std::string	Zombie::getName(void)
{
	return (this->_name);
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}