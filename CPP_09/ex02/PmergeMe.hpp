/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@students.42lausanne.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:58:32 by fmalizia          #+#    #+#             */
/*   Updated: 2023/03/28 10:58:32 by fmalizia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <deque>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

class PmergeMe
{
	private:
		std::vector<int>	vec;
		std::deque<int>		deq;
	public:
		PmergeMe();
		~PmergeMe();

		void	add_num(int x);
		void	fill_cont(std::string str);
		void	print_vec();
		void	print_vec5();
		void	print_deq();
		double	sort_vec();
		int		get_vec_size();
		//double	sort_deq();
};

void	insertion_sort(std::vector<int>&array, int l, int r);
void	merge(std::vector<int> &arr, std::vector<int> &temp, int l, int m, int r);
void	mergesort(std::vector<int> &arr, std::vector<int> &temp, int l, int r, int threshold);