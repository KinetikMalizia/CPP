/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@students.42lausanne.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:13:53 by fmalizia          #+#    #+#             */
/*   Updated: 2023/03/25 16:01:22 by fmalizia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	Exchange		ex;
	(void)ac;
	if (ex.fill_data())
		return (1);
	ex.run_input(av[1]);
	/* ex.print_map(); */
	return (0);
}