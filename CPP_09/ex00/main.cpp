/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:13:53 by fmalizia          #+#    #+#             */
/*   Updated: 2023/03/31 12:08:18 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	Exchange		ex;
	if (ac != 2)
	{
		std::cout << "Plase add only one input!\n";
		return (1);
	}
	if (ex.fill_data())
		return (1);
	ex.run_input(av[1]);
	/* ex.print_map(); */
	return (0);
}