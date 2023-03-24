/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@students.42lausanne.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:02:54 by fmalizia          #+#    #+#             */
/*   Updated: 2023/03/24 18:10:14 by fmalizia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <map>
#include <utility>
#include <fstream>
#include <string>
#include <cstdlib>

class Exchange
{
	private:
			std::map<std::string, double> data;
			std::pair<std::string, double> input;
	public:
		Exchange();
		Exchange(Exchange &og);
		~Exchange();

		int		fill_data(void);
		int		run_input(char *file);
		void	print_map(void);
};

int	check_date(std::string date);
bool isDateValid( int y, int m, int d );
