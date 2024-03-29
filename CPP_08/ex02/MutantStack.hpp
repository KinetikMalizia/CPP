/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:10:07 by fmalizia          #+#    #+#             */
/*   Updated: 2023/02/06 14:10:07 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
#include <algorithm>
#include <list>
#include <deque>

template <class T>

class MutantStack : public std::stack<T>
{
public:
	typedef std::stack<T> stack;
	typedef typename stack::container_type container;
	typedef typename container::iterator iterator;

	MutantStack() : stack()
	{
		std::cout << "Default Constructor called" << std::endl;
	}

	MutantStack(const stack &src) : stack(src)
	{
		std::cout << "Copy Constructor called" << std::endl;
	}

	~MutantStack()
	{
		std::cout << "Destructor called" << std::endl;
	}

	stack &operator=(const stack &src)
	{
		if (*this != src)
			*this = src;
		return (*this);
	}

	iterator begin()
	{
		return (stack::c.begin());
	}

	iterator end()
	{
		return (stack::c.end());
	}
};

#endif