/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:30:50 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/27 11:20:00 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>

int	main(void)
{
	std::array<int, 10> b = {1, 5, 9, 8, 78, 8, 4, 36, 57, 10};
	std::list<int> l;
	
	int* x = NULL;
	std::list<int>::iterator y;

	for (int j = 0; j < 50; j++)
		l.push_back(j);

	try
	{
		std::cout << "looking for 4\n";
		x = easyfind(b, 4);
		std::cout << *x << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		std::cout << "looking for 16\n";
		x = easyfind(b, 16);
		std::cout << *x << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "looking for 45\n";
		y = easyfind(l, 45);
		std::cout << *y << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "looking for 180\n";
		y = easyfind< std::list<int> >(l, 180);
		std::cout << *y << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return(0);
}