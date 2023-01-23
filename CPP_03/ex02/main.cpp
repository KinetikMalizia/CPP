/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:28:40 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/23 11:28:40 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
	ScavTrap	a("Sc4vTrap1");
	ScavTrap	b(a);
	ScavTrap	c;
	FragTrap	d("FragTrap1");
	FragTrap	e(d);
	FragTrap	f;

	c = a;
	f = e;
	a.attack("steve");
	a.guardGate();
	c.takeDamage(8);
	e.attack("Watson");
	f.takeDamage(2);
	d.highFivesGuys();
}