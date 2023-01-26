/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:46:32 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/26 14:17:38 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#define N 5

int main( void )
{
	int arr1[] = { 1, 2, 3, 4, 5 };

	std::cout << "arr1: " << std::endl;
	iter(arr1, N, &print);

	double arr2[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };

	std::cout << "\narr2: " << std::endl;
	iter(arr2, N, &print);

	char arr3[] = { 'a', 'b', 'c', 'd', 'e' };

	std::cout << "\narr3: " << std::endl;
	iter(arr3, N, &print);

	std::string arr4[] = { "one", "two", "three", "four", "five" };

	std::cout << "\narr4: " << std::endl;
	iter(arr4, N, &print);

	std::cout << "---------ADD---------\n\n" << std::endl;


	std::cout << "arr1: " << std::endl;
	iter(arr1, N, &add);

	std::cout << "\narr2: " << std::endl;
	iter(arr2, N, &add);

	std::cout << "\narr3: " << std::endl;
	iter(arr3, N, &add);

	return 0;
}