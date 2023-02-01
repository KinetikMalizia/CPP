/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 15:45:27 by jcarlen           #+#    #+#             */
/*   Updated: 2023/02/01 15:29:51 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
# include <iostream>
# include <string>

Base::~Base()
{
	std::cout << "Base destructor called" << std::endl;
}

Base* Base::generate(void)
{
	srand(time(NULL));
	switch(rand() % 3) 
	{
		case 0:
			std::cout << "Type A created." << std::endl;
			return new A;
		case 1:
			std::cout << "Type B created." << std::endl;
			return new B;
		case 2:
			std::cout << "Type C created." << std::endl;
			return new C;
		default:
			std::cout << "Error in generation" << std::endl;
			return(NULL);
	}
	return (NULL);
}

void	Base::identify(Base* p)
{
	if(p == NULL)
	{
		std::cout << "pointer doesn't exist" << std::endl;
		return;
	}
	if (dynamic_cast<A *>(p))
		std::cout << "Pointer is type A." << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Pointer is type B." << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Pointer is type C." << std::endl;
	else
		std::cout << "Cannot identify pointer type!" << std::endl;
}

void	Base::identify(Base& p)
{
	try 
	{
		A& a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "Reference is type A." << std::endl;
	} 
	catch (std::exception &e)
	{
		(void)e;
	}
	try 
	{
		B& b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "Reference is type B." << std::endl;
	} 
	catch (std::exception &e)
	{
		(void)e;
	}
	try 
	{
		C& c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "Reference is type C." << std::endl;
	} 
	catch (std::exception &e)
	{
		(void)e;
	}
}

