/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:00:54 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/16 11:13:55 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

void	Harl::debug( void ) {
	std::cout << "There is just the right amount of ketchup in my burger. But there seems to be too much cheese!" << std::endl;
}

void	Harl::info( void ) {
	std::cout << "There is no extra fart sauce in my burger! This is very unusual!" << std::endl;
}

void	Harl::warning( void ) {
	std::cout << "If I don't get another burger for free I will get you fired! I know the owner's grandma!" << std::endl;
}

void	Harl::error( void ) {
	std::cout << "I am litterally calling the cops!" << std::endl;
}

Harl::Harl(/* args */)
{
	std::cout << "Harl default construcor called\n" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl default destructor called" << std::endl;
}

void	Harl::complain( std:: string level ) {
	t_func  funcs[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (i < 4 && levels[i].compare(level))
		i++ ;
	if (i < 4)
		(this->*funcs[i])();
}