/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:28:34 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/23 11:28:34 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name):
	ClapTrap(name, 100, 100, 30)
{
	std::cout <<this->_name << ": FT Named constructor called\n";
}


FragTrap::FragTrap(FragTrap const& og):
	ClapTrap(og._name, og._hit, og._energy, og._attack)
{
	std::cout << this->_name << ": FT Copy constructor called\n";
}

FragTrap::FragTrap() :
	ClapTrap("", 100, 100, 30)
{
		std::cout << "FT Default constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << this->_name << ": FT Destructor called\n";
}

void	FragTrap::attack(const std::string& target)
{
	if (this->_energy < 1 || this->_hit < 1)
	{
		std::cout << "FragTrap " << this->_name << " has no more energy\n";
		return ;
	}
	this->_energy -= 1;
	std::cout << "FragTrap " << this->_name << " uses laser beam on "
		<< target << " and causes " << this->_attack << " damage to their armor" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Come on guys! Let's high five :]\n";
}