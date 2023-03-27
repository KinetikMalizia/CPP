/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@students.42lausanne.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:16:34 by fmalizia          #+#    #+#             */
/*   Updated: 2023/03/27 15:16:34 by fmalizia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <stack>
#include <iostream>
#include <cstdlib>

int	is_op(char o)
{
	if (o == '+' || o == '-' || o == '/' || o == '*')
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	std::stack<float>	stack;
	std::string			str;
	float				n1;
	float				n2;

	if (ac != 2)
	{
		std::cout << "WRONG FORMAT!\n";
		return (1);
	}
	str = av[1];
	for (int i = 0; str[i]; ++i)
	{
		if (std::isdigit(str[i]))
			stack.push(str[i] - '0');
		else if (is_op(str[i]))
		{
			if (stack.size() < 2)
			{
				std::cout << "ERROR in calculation\n";
				return (1);
			}
			n2 = stack.top();
			stack.pop();
			n1 = stack.top();
			stack.pop();
			if (str[i] == '+')
				stack.push(n1 + n2);
			if (str[i] == '-')
				stack.push(n1 - n2);
			if (str[i] == '*')
				stack.push(n1 * n2);
			if (str[i] == '/')
				stack.push(n1 / n2);
		}
		else if (str[i] != ' ')
		{
			std::cout << "Unknown symbol in calculation [" << str[i] << "]\n";
			return (1);
		}
	}
	std::cout << stack.top();
	if (stack.size() > 1)
		std::cout << " ...there are extra numbers in the calculation by the way";
	std::cout << std::endl;
	return (0);
}



