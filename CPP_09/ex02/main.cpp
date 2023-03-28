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

#include "PmergeMe.hpp"

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
	for (int i = 0; str[i]; ++i)
	{
		if (str[i] == ' ')
			continue;
		if (str[i] == '-' && str[i + 1] && std::isdigit(str[i+1]))
			continue;
		if (std::isdigit(str[i]))
			continue;
		std::cout << "Unkown symbol in input!\n";
		return (1);
	}
	cont.fill_cont(str);
	std::cout << cont.sort_vec() << std::setprecision(5);
	std::cout << " sec\n";


	/* cont.print_vec();
	std::cout << "DEQUE\n";
	cont.print_deq(); */
}