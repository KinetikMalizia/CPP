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

class PmergeMe
{
	private:
		std::vector<int>	vec;
		std::deque<int>		deq;
	public:
		PmergeMe();
		~PmergeMe();
};

