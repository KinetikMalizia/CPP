/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@students.42lausanne.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:13:53 by fmalizia          #+#    #+#             */
/*   Updated: 2023/03/24 14:33:58 by fmalizia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	Exchange		ex;
	std::ifstream	input;

	if (ac != 2)
	{
		std::cout << "Wrong format! Use ./btc [input file]\n";
		return (1);
	}
	input.open(av[1]);
	if (!input)
	{
		std::cout << "Unable to open " << av[1] << std::endl;
		return (1);
	}

	if (ex.fill_data())
		return (1);
	if (ex.check_date("2000-02-29"))
		std::cout << "ERROR!\n";
	input.close();
	return (0);
}