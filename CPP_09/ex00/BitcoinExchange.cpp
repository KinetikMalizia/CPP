/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@students.42lausanne.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:05:46 by fmalizia          #+#    #+#             */
/*   Updated: 2023/03/24 15:35:00 by fmalizia         ###   ########.fr       */
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
	std::string line;
	std::string date;
	std::string val;
	
	database.open("data.csv");
	if (!database)
	{
		std::cout << "Unable to open data.csv\n";
		return (1);
	}
	std::getline(database, line);
	while(std::getline(database ,line))
	{
		date = line.substr(0, 10);
		if (check_date(date))
		{
			std::cout << "Error in database\n";
			return (1);
		}
		val = line.substr(11, 16);
		this->data[date] = atof(val.c_str());
	}
	database.close();
	return (0);
}

void	Exchange::print_map(void)
{
	std::cout << "KEY & VALUE" << std::endl;
	for (std::map<std::string, double>::iterator iter = this->data.begin(); iter != this->data.end(); iter++)
	{
		std::cout<<(*iter).first<<"\t"<<(*iter).second<<"\n";
	}
}

int	check_date(std::string date)
{
	int	y,m,d;
	int i = 0;
	while (i < 10)
	{
		if (i == 4 || i == 7)
		{
			if (date[i] != '-')
				return (1);
		}
		else if (date[i] < '0' || date[i] > '9')
			return (1);
		++i; 
	}
	y = atoi(date.substr(0,4).c_str());
	m = atoi(date.substr(5,2).c_str());
	d = atoi(date.substr(8,2).c_str());
	if (!isDateValid(y,m,d))
		return (1);
	return (0);
}

bool isDateValid( int y, int m, int d )
{
	if( m> 12) return false; //month
	if( d> 31 ) return false; //day
	if( d == 31 && ( m == 4 || m == 6 || m == 9 || m == 11 ) )
		return false; //30 days in Apr, Jun, Sen, Nov
	if( m == 2)
	{
		if( d > 29 ) return false;
		if( d == 29 && (( y%100 )%4 != 0)) return false;
	} //Feb
	return true;
}

