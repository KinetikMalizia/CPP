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
			Span(unsigned int N);
			Span(Span& og);
			~Span(void);
			Span& operator=(Span &rhs);

			unsigned int	getSize(void) const;

			void	addNumber(int n);
			unsigned int longestSpan(void) const;
			unsigned int shortestSpan(void) const;

			const	std::list<int>* getList(void) const;
			class MaxStorageReachedException : public std::exception {
				virtual const char* what() const throw() { return "Max storage of span has been reached"; };
			};
			class ListTooShortException : public std::exception {
				virtual const char* what() const throw() {return "Not enough numbers in list";};
			};

			template<typename II>
			void			addNumbers( II begin, II end )
			{
				unsigned int	d = std::distance(begin, end);

				if ( d > (this->_size - this->_list.size()))
					throw Span::MaxStorageReachedException();
				this->_list.insert(this->_list.end(), begin, end);
			}
};

std::ostream& operator<<( std::ostream&, const Span& );

#endif