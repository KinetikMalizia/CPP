/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@students.42lausanne.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:05:46 by fmalizia          #+#    #+#             */
/*   Updated: 2023/03/25 17:36:43 by fmalizia         ###   ########.fr       */
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
	int i = 2;
	
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
			std::cout << "Error in database, this date doesn't exist [" << date << "] (line: "<< i << ")\n";
			return (1);
		}
		val = line.substr(11, 16);
		this->data[date] = atof(val.c_str());
		++i;
	}
	this->last_date = date;
	database.close();
	return (0);
}

int	Exchange::run_input(char *file)
{
	std::ifstream	input;
	std::string		line;
	std::string		date;
	std::string		value;
	double			amount;

	input.open(file);
	if (!input)
	{
		std::cout << "Unable to open " << file << std::endl;
		return (1);
	}
	std::getline(input, line);
	while (std::getline(input, line))
	{
		date = line.substr(0,10);
		if (check_date(date))
		{
			std::cout << "Error: bad input => " << date << std::endl;
			continue;
		}
		value = line.substr(13,5);
		amount = atof(value.c_str());
		if (check_amount(amount))
			continue;
		amount = amount * find_closest_date(date);
		std::cout << date << " => " << value << " = " << amount << std::endl;
	}
	input.close();
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

double	Exchange::find_closest_date(std::string date)
{
	std::map<std::string, double>::iterator itr = this->data.begin();
	std::string	closest = itr->first;
	std::string	prev = "1000-01-01";
	if (cmp_dates(date, closest) < 0)
	{
		std::cout << "!!Date before start of database!! ";
		return (0);
	}
	if (cmp_dates(date, this->last_date) > 0)
	{
		std::cout << "!!Date after end of database!! ";
		return (this->data.find(last_date)->second);
	}
	while (cmp_dates(date, closest) > 0)
	{
		prev = itr->first;
		itr++;
		closest = itr->first;
	}
	if (date.compare(closest))
		closest = prev;
	return(this->data.find(closest)->second);
}

int	check_amount(double value)
{
	if (value < 0)
	{
		std::cout << "Error: not a positive number\n";
		return (1);
	}
	if (value > 1000)
	{
		std::cout << "Error: too large a number\n";
		return (1);
	}
	return (0);
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

int	cmp_dates(std::string da1, std::string da2)
{
	int	y1,m1,d1;
	int	y2,m2,d2;
	y1 = atoi(da1.substr(0,4).c_str());
	m1 = atoi(da1.substr(5,2).c_str());
	d1 = atoi(da1.substr(8,2).c_str());
	y2 = atoi(da2.substr(0,4).c_str());
	m2 = atoi(da2.substr(5,2).c_str());
	d2 = atoi(da2.substr(8,2).c_str());
	if (y1 < y2)
		return (-1);
	if (y1 == y2 && m1 < m2)
		return (-1);
	if (y1 == y2 && m1 == m2 && d1 < d2)
		return (-1);
	if (y1 == y2 && m1 == m2 && d1 == d2)
		return (0);
	return (1);
}