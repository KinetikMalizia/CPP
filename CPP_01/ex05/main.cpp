/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:16:05 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/16 11:16:05 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void ) {

	std::string	input;
	Harl		harl;

	do
	{
		std::cout << "Enter a level: ";
		std::cin >> input;
		harl.complain(input);
	} while (input.compare("exit"));

	return EXIT_SUCCESS;
}