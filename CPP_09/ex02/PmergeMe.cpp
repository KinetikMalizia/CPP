/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@students.42lausanne.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 11:00:36 by fmalizia          #+#    #+#             */
/*   Updated: 2023/03/28 11:00:36 by fmalizia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	std::cout << "create\n";
}

PmergeMe::~PmergeMe()
{
	std::cout << "destroy\n";
}

void	PmergeMe::add_num(int x)
{
	this->vec.push_back(x);
	this-> deq.push_back(x);
}

void	PmergeMe::fill_cont(std::string str)
{
	std::string	cut;
	int			start = 0;
	int			end = str.find(' ');

	while (end != -1)
	{
		cut = str.substr(start, end - start);
		start = end + 1;
		end = str.find(' ', start);
		this->add_num(std::atoi(cut.c_str()));
	}
	cut = str.substr(start, end - start);
	this->add_num(std::atoi(cut.c_str()));
}

void	PmergeMe::print_vec(void)
{
	std::vector<int>::iterator itr;

	for (itr = this->vec.begin(); itr != this->vec.end(); itr++)
	{
		std::cout << *itr << std::endl;
	}
}

void	PmergeMe::print_deq(void)
{
	std::deque<int>::iterator itr;

	for (itr = this->deq.begin(); itr != this->deq.end(); itr++)
	{
		std::cout << *itr << std::endl;
	}
}