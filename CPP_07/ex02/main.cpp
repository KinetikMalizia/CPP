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
/*
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

<<<<<<< HEAD
	std::cout << "-----------------------------------------------------" << std::endl;

	return ( 0 );
=======
    return ( 0 );
}

*/

#include <iostream>
#include <cstdlib>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
	std::cout << "test with -2\n";
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	std::cout << "test with MAX VAL\n";
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
>>>>>>> 1d2b6f25b816e9bd2d260f44b905d20fea9378df
}