/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:26:13 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/23 11:26:13 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
	ScavTrap	a("Bop");
	ScavTrap	b(a);
	ScavTrap	c;

	c = a;
	a.attack("steve");
	a.guardGate();
	c.takeDamage(8);
}