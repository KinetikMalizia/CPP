/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:46:33 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/12 12:39:30 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	Cat*	Gilgamesh = new Cat();
	Dog*	Kodac = new Dog();
	
	Gilgamesh->setIdea(0, "I want food");
	Kodac->setIdea(0, "Balle");
	std::cout << "Gilgamesh think: " << Gilgamesh->getIdea(0) << std::endl;
	std::cout << "Kodac think: " << Kodac->getIdea(0) << std::endl;
	Cat*	LucyPurr = new Cat(*Gilgamesh);
	Dog*	AnotherDog = new Dog(*Kodac);
	std::cout << "LucyPurr think: " << LucyPurr->getIdea(0) << std::endl;
	std::cout << "AnotherDog think: " << AnotherDog->getIdea(0) << std::endl;	
	LucyPurr->setIdea(0, "I want to play");
	AnotherDog->setIdea(1, "FOOD");
	std::cout << "Kodac think: " << Kodac->getIdea(1) << std::endl;	
	std::cout << "AnotherDog think: " << AnotherDog->getIdea(1) << std::endl;	
	std::cout << "LucyPurr think: " << LucyPurr->getIdea(0) << std::endl;
	std::cout << "Gilgamesh think: " << Gilgamesh->getIdea(0) << std::endl;
	Gilgamesh->setIdea(0, "I love to eat");
	std::cout << "LucyPurr think: " << LucyPurr->getIdea(0) << std::endl;
	std::cout << "Gilgamesh think: " << Gilgamesh->getIdea(0) << std::endl;

	delete Gilgamesh;
	delete LucyPurr;
	delete Kodac;
	delete AnotherDog;

	std::cout << "\n----- multiple animals -----\n";
	Animal* zoo[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
	for ( int i = 0; i < 4; i++ ) {
		zoo[i]->setIdea(0, "I love that I am a " + zoo[i]->getType());
		std::cout << "animal " << i << ": " << zoo[i]->getIdea(0) << std::endl;
	}
	std::cout << "\n----- delete animals -----\n";
	for ( int i = 0; i < 4; i++ )
	{
		delete (zoo[i]);
	}
	return (0);
}