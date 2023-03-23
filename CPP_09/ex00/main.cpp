/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:13:53 by fmalizia          #+#    #+#             */
/*   Updated: 2023/03/23 17:00:09 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	Exchange		ex;
	std::ifstream	database;
	std::ifstream	input;

	if (ac != 2)
	{
		std::cout << "Wrong format! Use ./btc [input file]\n";
		return (1);
	}
	database.open("data.csv");
	if (!database)
	{
		std::cout << "Unable to open data.csv\n";
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
	
	database.close();
	input.close();
	return (0);
}