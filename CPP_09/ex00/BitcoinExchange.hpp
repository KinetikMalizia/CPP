/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:02:54 by fmalizia          #+#    #+#             */
/*   Updated: 2023/03/23 17:00:08 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <map>
#include <utility>
#include <fstream>
#include <string>

class Exchange
{
	private:
			std::map<std::string, double> data;
			std::pair<std::string, double> input;
	public:
		Exchange();
		Exchange(Exchange &og);
		~Exchange();

		int fill_data(void);
		//int	check_date(std::string line);


};