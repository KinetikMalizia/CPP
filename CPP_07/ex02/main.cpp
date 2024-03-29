/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:37:36 by fmalizia          #+#    #+#             */
/*   Updated: 2023/02/06 12:30:55 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define SIZE 10

int main( void )
{
	std::cout << "-----------------------------------------------------" << std::endl;

	Array< float > test;

	Array< int > intArray( SIZE );
	Array< int > intArray2( SIZE - 5 );

	std::cout << "------------------float-------------------------------" << std::endl;
	try
	{
		std::cout << "size of float array: " << test.size() << std::endl;
		std::cout << "accessing array item 0: " << test[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	std::cout << "------------------int-------------------------------" << std::endl;

	for ( unsigned int i = 0; i < intArray.size(); i++ )
		intArray[i] = i * 2;

	std::cout << "Int Array 1: " << intArray << std::endl;

	intArray2 = intArray;

	std::cout << "int Array 2: " << intArray2 << std::endl;

	try {
		std::cout << "Accessing a valid index: " << intArray[5] << std::endl;
		std::cout << "Accessing an invalid index: " << intArray[SIZE] << std::endl;
	} catch (std::out_of_range& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "-----------------------------------------------------" << std::endl;

	return ( 0 );
}