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
	float		time_v = 0;
	char		*str;
	int			size;

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
	size = cont.get_vec_size();
	std::cout << "before: ";
	cont.print_vec5();
	std::cout << std::setprecision(8);
	time_v = cont.sort_vec();
	std::cout << "after : ";
	cont.print_vec5();
	std::cout << "\nsort of " << size <<" elements took [" << time_v * 100000 << "]us for std::vector\n";
	//cont.print_deq5();
	time_v = cont.sort_deq();
	//cont.print_deq5();
	std::cout << "\nsort of " << size <<" elements took [" << time_v * 100000 << "]us for std::deque\n";


	/* cont.print_vec();
	std::cout << "DEQUE\n";
	cont.print_deq(); */
}