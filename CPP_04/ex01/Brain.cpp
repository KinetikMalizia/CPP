/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:54:22 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/11 14:42:48 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	for (int i = 0; i < 100; i++)
		_ideas[i].clear();
	std::cout << "Brain default constructor called\n";
}

Brain::Brain(Brain &og)
{
	*this = og;
	std::cout << "Brain copy constructor called\n";
}

Brain::~Brain(void)
{
	for (int i = 0; i < 100; i++)
		_ideas[i].clear();
	std::cout << "Brain destructor called\n";
}

Brain	&Brain::operator=(Brain &rhs)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs.getIdea(i);
	return (*this);
}

void	Brain::setIdea(int i, std::string val)
{
	if (i < 100)
		this->_ideas[i] = val;
}

std::string	Brain::getIdea(int i)
{
	if (i < 100)
		return (this->_ideas[i]);
	return (NULL);
}