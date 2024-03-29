/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:02:52 by jcarlen           #+#    #+#             */
/*   Updated: 2023/02/01 15:06:01 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"
#include <iostream>

int main(int ac, char **av)
{

	if (ac != 2)
	{
		std::cout << "Wrong syntax." << std::endl;
		return 0;
	}

	Converter value(av[1]);
	std::string	line(av[1]);

	value.Convert(line);
}