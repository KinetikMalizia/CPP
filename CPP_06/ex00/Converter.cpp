/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:03:01 by jcarlen           #+#    #+#             */
/*   Updated: 2023/02/01 15:29:52 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter()
{
	std::cout << "Converter default constructor called" << std::endl;
	return ;
}

Converter::~Converter()
{
	std::cout << "Converter destructor called" << std::endl;
	return ;
}

Converter::Converter(Converter &og)
{
	*this = og;
}

Converter::Converter(const std::string& value): _value(value)
{
	std::cout << "Converter constructor called => " << std::endl;
}

Converter &Converter::operator=(Converter const &rhs)
{
	(void)rhs;
	return *this;
}

static int ft_isDigit(char c)
{
	if (!c)
		return (0);
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

static size_t	checkFormat(std::string av)
{
	size_t	x(0);
	int		i(0);

	if (av[0] == '-' || av[0] == '+')
		x++;
	while(ft_isDigit(av[x]) || av[x] == '.')
	{
		if (av[x] == '.')
			++i;
		x++;
	}
	if (av[x] == 'f')
		++x;
	if (i > 1)
		return (0);
	return (x);
}

void Converter::Convert(std::string av)
{
	size_t x = 0;

	x = checkFormat(av);
	if(x == av.length() || av.length() == 1)
	{
		Converter::Print_1(av);
		Converter::Print_2(av);
	}
	else
		std::cout << "Synthax error" << std::endl;
}

void Converter::Print_1(std::string av)
{
	const char charV = Cchar();
	const float floatV = Cfloat();

	if (av == "nan" || av == "+inf" || av == "-inf" || av == "nanf" || av == "+inff" || av == "-inff")
	{
		std::cout << "int: impossible" << std::endl;
		std::cout << "char: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return;
	}
	if (floatV < CHAR_MIN || floatV > CHAR_MAX || isnan(floatV))
	{
		std::cout << "char: impossible" << std::endl;
	} 
	else if (isprint(charV)) 
	{
		std::cout << "char: '" << charV << "'" << std::endl;
	} 
	else 
	{
		std::cout << "char: non displayable" << std::endl;
	}
}

void Converter::Print_2(std::string av)
{
	const int intV = Cint();
	const float floatV = Cfloat();
	const double doubleV = Cdouble();
	
	if (av == "nan" || av == "+inf" || av == "-inf" || av == "nanf" || av == "+inff" || av == "-inff")
		return;
	if (floatV < INT_MIN || floatV > INT_MAX || isnan(intV))
	{
		std::cout << "int: impossible" << std::endl;
	} 
	else
	{
		std::cout << "int: " << intV << std::endl;
	}

	if (floatV - intV == 0)
	{
		std::cout << "float: " << floatV << ".0f" << std::endl;
		std::cout << "double: " << doubleV << ".0" << std::endl;
	} 
	else 
	{
		std::cout << "float: " << floatV << "f" << std::endl;
		std::cout << "double: " << doubleV << std::endl;
	}
}

char Converter::Cchar() 
{

	return static_cast<char>(Cfloat());
}

int Converter::Cint() 
{
	return static_cast<int>(Cfloat());
}

float Converter::Cfloat() 
{
	if(!ft_isDigit(_value[0]) && (_value[0] != '-' && _value[1] != '\0'))
		return static_cast<float>(_value.c_str()[0]);
	return atof(_value.c_str());//string to char*
}

double Converter::Cdouble() 
{
	return static_cast<double>(Cfloat());
}