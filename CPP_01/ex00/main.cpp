/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:22:13 by fmalizia          #+#    #+#             */
/*   Updated: 2022/12/21 16:19:07 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*z1 = newZombie("z1");
	Zombie	z2("z2");
	Zombie	z3("z3");
	Zombie	z4;
	randomChump("z4");
	z1->announce();
	z2.announce();
	z3.announce();
	delete(z1);
	return (0);
}