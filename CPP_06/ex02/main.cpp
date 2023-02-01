/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:08:53 by jcarlen           #+#    #+#             */
/*   Updated: 2023/02/01 15:29:47 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>
#include <cstdlib>
//#include <unistd.h>

int main() 
{

	std::cout << "\n-----1------\n";
	Base *type1 = NULL;
	type1 = type1->generate();
	type1->identify(type1);
	type1->identify(*type1);
	std::cout << "-----------\n";
	//sleep(1);
	std::cout << "\n-----2------\n";
	Base *type2 = NULL;
	type2 = type2->generate();
	type2->identify(type2);
	type2->identify(*type2);
	std::cout << "-----------\n";
	//sleep(1);
	std::cout << "\n-----3------\n";
	Base *type3 = NULL; 
	type3 = type3->generate();
	type3->identify(type3);
	type3->identify(*type3);
	std::cout << "-----------\n";
	delete type1;
	delete type2;
	delete type3;
}