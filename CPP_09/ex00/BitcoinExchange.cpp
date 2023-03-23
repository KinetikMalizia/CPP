/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:05:46 by fmalizia          #+#    #+#             */
/*   Updated: 2023/03/23 17:03:10 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

Exchange::Exchange(void)
{
	std::cout << "Exchange default construcor called\n";
}

Exchange::Exchange(Exchange &og)
{
	std::cout << "Exchange copy construcor called\n";
	(void)og;
}

Exchange::~Exchange(void)
{
	std::cout << "Exchange destrucor called\n";
}

int	Exchange::fill_data(void)
{
	std::ifstream database;
	std::string line("start");
	std::string date;
	std::string val;
	
	database.open("data.csv");
	if (!database)
	{
		std::cout << "Unable to open data.csv\n";
		return (1);
	}

	while(std::getline(database ,line))
	{
		//line.substr(0, 10)
		this->data.insert({"hello", 10}); 
	}
	for (auto itr = this->data.begin(); itr != this->data.end(); ++itr)
	{
		std::cout << itr->first;
	}
	return (0);
}