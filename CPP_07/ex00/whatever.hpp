/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:09:31 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/26 13:19:04 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template<typename T>
void	swap(T &a, T &b)
{
		T temp = a;
		a = b;
		b = temp;
}

template<typename T>
T	min(T &a, T &b)
{
	if (a < b)
		return (a);
	return (b);
}

template<typename T>
T	max(T &a, T &b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif