/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:26:04 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/23 11:26:04 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name, int hit, int energy, int attack) :
	_name(name), _hit(hit), _energy(energy), _attack(attack)
{
	std::cout << this->_name << ": CT parameter constructor called\n";
}

ClapTrap::ClapTrap(std::string	name) : _name(name)
{
	this->_hit = 10;
	this->_energy = 10;
	this->_attack = 0;
	std::cout << this->_name << ": CT named constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& og)
{
	*this = og;
	std::cout << this->_name << ": CT Copy contructor called\n";
}

ClapTrap::ClapTrap()
{
	this->_name = "NULL";
	this->_hit = 10;
	this->_energy = 10;
	this->_attack = 0;
	std::cout << "CT Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->_name << ": CT Destructor called" << std::endl;
}

/*Public functions EX00*/

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energy < 1 || this->_hit < 1)
	{
		std::cout << "ClapTrap " << this->_name << " cannot attack\n";
		return ;
	}
	this->_energy -= 1;
	std::cout << "ClapTrap " << this->_name << " attacks "
		<< target << " and causes " << this->_attack << " points of damage" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit <= int(amount))
	{
		amount = this->_hit;
		this->_hit = 0;
	}
	else
		this->_hit -= amount;
	std::cout << "ClapTrap " << this->_name << " has taken "
		<< amount << " points of damage\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy < 1 || this->_hit < 1)
	{
		std::cout << "ClapTrap " << this->_name << " cannot repair itself\n";
		return ;
	}
	this->_energy -= 1;
	this->_hit += (int)amount;
	std::cout << "ClapTrap " << this->_name << " healed itself for "
		<< amount << " hit points\n";
}

ClapTrap& ClapTrap::operator=(ClapTrap& rhs)
{
	this->_name = rhs._name;
	this->_hit = rhs._hit;
	this->_energy = rhs._energy;
	this->_attack = rhs._attack;
	return (*this);
}