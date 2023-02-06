/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 10:12:32 by fmalizia          #+#    #+#             */
/*   Updated: 2023/02/06 13:55:50 by fmalizia         ###   ########.ch       */
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
	std::cout << "Span Destructor called\n";
}

Span& Span::operator=(Span& rhs)
{
	for (std::list<int>::iterator it = rhs._list.begin(); it != rhs._list.end(); ++it)
		this->_list.push_back(*it);
	return (*this);
}

void	Span::addNumber(int N)
{
	if (this->_list.size() >= this->_size)
		throw	Span::MaxStorageReachedException();
	this->_list.push_back(N);
}

const	std::list< int >* Span::getList(void) const
{
	return (&this->_list);
}

unsigned int	Span::getSize(void) const
{
	return (this->_size);
}

unsigned int	Span::longestSpan(void) const
{
	if (this->_list.size() < 2)
		throw Span::ListTooShortException();
	return (*std::max_element(_list.begin(), _list.end()) - *std::min_element(_list.begin(), _list.end()));
}

unsigned int	Span::shortestSpan(void) const
{
	if (this->_list.size() < 2)
		throw Span::ListTooShortException();
	unsigned int	min = this->longestSpan();
	for ( std::list<int>::const_iterator it = _list.begin(); it != _list.end(); ++it )
	{
		for ( std::list<int>::const_iterator it2 = _list.begin(); it2 != _list.end(); ++it2 )
		{
			if (it == it2)
				continue;
			if (std::abs( *it2 - *it ) <  static_cast< int >( min ))
				min = std::abs( *it2 - *it );
		}
	}
	return (min);
}

std::ostream& operator<<(std::ostream& os, const Span& span)
{
	for ( std::list<int>::const_iterator it = span.getList()->begin(); it != span.getList()->end(); ++it )
		os << *it << " ";
	return os;
}