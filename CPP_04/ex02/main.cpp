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

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	Cat*	Flim = new Cat();
	Dog*	Flam = new Dog();

	Flim->setIdea(0, "I am a bird");
	Flim->setIdea(1, "Hungry");
	Flam->setIdea(0, "I like Flim");
	Flam->setIdea(1, "I want to steal the declaration of independance");

	Dog* Flum = new Dog(*Flam);
	std::cout << "Flim: " << Flim->getIdea(0) << std::endl;
	std::cout << "Flim: " << Flim->getIdea(1) << std::endl;
	Flim->makeSound();
	std::cout << "Flam: " << Flam->getIdea(0) << std::endl;
	std::cout << "Flam: " << Flam->getIdea(1) << std::endl;
	Flam->makeSound();
	std::cout << "Flum: " << Flum->getIdea(0) << std::endl;
	std::cout << "Flum: " << Flum->getIdea(1) << std::endl;
	Flum->makeSound();
	delete Flim;
	delete Flam;
	delete Flum;
	return (0);
}