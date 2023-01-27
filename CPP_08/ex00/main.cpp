/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:30:50 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/27 10:12:09 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>

int	main(void)
{
	std::array<int, 10> b = {1, 5, 9, 8, 78, 8, 4, 36, 57, 10};

	int* x = NULL;

	try
	{
		x = easyfind(b, 4);
		std::cout << *x << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		x = easyfind(b, 16);
		std::cout << *x << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return(0);
}