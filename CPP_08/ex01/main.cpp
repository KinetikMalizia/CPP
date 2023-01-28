/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 10:12:27 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/27 11:37:39 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>
#include <cstdlib>
#include <ctime>
#include <time.h>


int main( void )
{
	std::cout << "---- TEST #1 -----" << std::endl;

	Span sp(5);

	sp.addNumber( 6 );
	sp.addNumber( 3 );
	sp.addNumber( 9 );
	sp.addNumber( 17 );
	sp.addNumber( 11 );

	std::cout << "sp: " << sp << std::endl;

	std::cout << "longestSpan: " << sp.longestSpan() << std::endl;
	std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;

	std::cout << "\n--Adding a 6th number--" << std::endl;

	try
	{
		sp.addNumber(88);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "\n---- TEST #2 -----" << std::endl;

	try {
		std::list<int>    l( 10000 );
		std::srand( time ( NULL ) );
		std::generate( l.begin(), l.end(), std::rand );

		Span span( l.size() );

		span.addNumbers( l.begin(), l.end() );

		std::cout << "Longest span: " << span.longestSpan() << std::endl;
		std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
		
	} catch ( std::exception& e ) {
		std::cout << e.what() << std::endl; 
	}

	return EXIT_SUCCESS;
}

/*
int main( void ) {
	Span				sp(10000);
	std::vector<int>	vec;

	std::srand(time(NULL));
	try {
		for ( int i = 0; i < 9997 ; i++)
			sp.addNumber(std::rand() % 100000000);
		std::cout << "Size: " << sp.getList()->size() << " Storage: " << sp.getSize() << std::endl;
		vec.push_back(1);
		vec.push_back(12);
		vec.push_back(23);
		sp.addNumbers< std::vector<int>::iterator >(vec.begin(), vec.end());
		for (unsigned int i = 0; i < 10 ; i++) {
			//std::cout << "Span[" << i << "]: " << sp.getList()[i] << std::endl;
		}
		std::cout << "[...]" << std::endl;
		for (unsigned int i = 9997; i < sp.getSize() ; i++) {
			//std::cout << "Span[" << i << "]: " << sp.getList()[i] << std::endl;
		}
		std::cout << "Shortest Range: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest Range: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "Time elapsed: " << clock() << std::endl;
	return 0;
}
*/