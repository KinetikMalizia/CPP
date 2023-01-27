/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 10:12:32 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/27 15:55:28 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N): _size(N)
{
	std::cout << "Span Creator called with size: " << N << std::endl;
}

Span::Span(Span& og)
{
	this->_size = og._size;
	for (std::list<int>::iterator it = og._list.begin(); it != og._list.end(); ++it)
		this->_list.push_back(*it);
	std::cout << "Span copy Creator called with size: " << og._size << std::endl;
}

Span::~Span(void)
{
	std::cout << "Span Desturctor called\n";
}

Span& Span::operator=(Span& rhs)
{
	for (std::list<int>::iterator it = rhs._list.begin(); it != rhs._list.end(); ++it)
		this->_list.push_back(*it);
	return (*this);
}

void	Span::addNumber(int N)
{
	if (this->_list.size() > this->_size)
		throw	Span::MaxStorageReachedException();
	this->_list.push_back(N);
}

const std::list< int >* Span::getList(void) const
{
	return &this->_list;
}