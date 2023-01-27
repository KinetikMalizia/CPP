/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 10:12:30 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/27 15:55:28 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <deque>
# include <list>
# include <vector>
# include <sstream>
# include <iomanip>
# include <limits>

class Span
{
	private:
			std::list<int>	_list;
			unsigned int	_size;
	public:
			Span(unsigned int N = 0);
			Span(Span& og);
			~Span(void);
			Span& operator=(Span &rhs);

			void	addNumber(int n);
			
			const 	std::list<int>* getList(void) const;
			class MaxStorageReachedException : public std::exception {
				virtual const char* what() const throw() { return "Max storage of span has been reached"; };
			};
			class NotEnoughNumbersException : public std::exception {
				virtual const char* what() const throw() {return "Not enough numbers";};
			};
};

#endif