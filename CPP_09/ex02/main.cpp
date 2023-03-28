/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@students.42lausanne.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 11:18:02 by fmalizia          #+#    #+#             */
/*   Updated: 2023/03/28 11:18:02 by fmalizia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PmergeMe.hpp>

int	main(int ac, char **av)
{
	PmergeMe	cont;
	char		*str;

	if (ac != 2)
	{
		std::cout << "WRONG FORMAT!\n";
		return (1);
	}
	str = av[1];
	for (int i = 0; av[i]; ++i)
	{
		if (std::isdigit(str[i]))
			cont.add_num();
	}
}