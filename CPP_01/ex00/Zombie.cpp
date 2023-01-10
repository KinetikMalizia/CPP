/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:22:26 by fmalizia          #+#    #+#             */
/*   Updated: 2022/12/21 16:20:42 by fmalizia         ###   ########.ch       */
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
