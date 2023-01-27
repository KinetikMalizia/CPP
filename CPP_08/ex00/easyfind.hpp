/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:24:12 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/27 10:12:10 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <vector>
# include <list>
# include <array>

class NotFoundException : public std::exception
{
	public:
		virtual const char* what() const throw() { return "object not found in container"; }
};

template <typename T>
typename T::iterator easyfind(T& container, int n)
{
	typename T::iterator i = std::find(container.begin(), container.end(), n);
	if (i != container.end())
		return (i);
	else
		throw NotFoundException();
}

#endif