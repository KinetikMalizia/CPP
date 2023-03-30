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
}

PmergeMe::~PmergeMe()
{
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
		if (cut[0] != '\0')
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
		std::cout << *itr << " ";
	}
	std::cout << "\n";
}

void	PmergeMe::print_vec5(void)
{
	std::vector<int>::iterator itr;
	int	d_limit = d_limit = vec.size();

	if (this->vec.size() > 5)
		d_limit = 5;

	for (itr = this->vec.begin(); itr != this->vec.begin() + d_limit; itr++)
	{
		std::cout << *itr << " ";
	}
	if (this->vec.size() > 5)
		std::cout << "[...]";
	std::cout << "\n";
}

void	PmergeMe::print_deq(void)
{
	std::deque<int>::iterator itr;

	for (itr = this->deq.begin(); itr != this->deq.end(); itr++)
	{
		std::cout << *itr << " ";
	}
	std::cout << std::endl;
}


void	PmergeMe::print_deq5(void)
{
	std::deque<int>::iterator itr;
	int	d_limit = d_limit = deq.size();

	if (this->deq.size() > 5)
		d_limit = 5;

	for (itr = this->deq.begin(); itr != this->deq.begin() + d_limit; itr++)
	{
		std::cout << *itr << " ";
	}
	if (this->deq.size() > 5)
		std::cout << "[...]";
	std::cout << "\n";
}

float	PmergeMe::sort_vec(void)
{
	time_t	start, end;
	std::vector<int> *temp_vec = new std::vector<int>(3000);

	start = std::clock();

	mergesort_v(this->vec, *temp_vec,0,this->vec.size()-1, 5);

	end = std::clock();
	return ((float)(end-start) / (float)CLOCKS_PER_SEC);
}

float	PmergeMe::sort_deq(void)
{
	time_t	start, end;
	std::deque<int> *temp_vec = new std::deque<int>(3000);

	start = std::clock();

	mergesort_q(this->deq, *temp_vec,0,this->deq.size()-1, 5);

	end = std::clock();
	return ((float)(end-start) / (float)CLOCKS_PER_SEC);
}

int	PmergeMe::get_vec_size(void)
{
	return (this->vec.size());
}

//0.078125