/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:57:42 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/09 14:57:42 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
			int					_value;
			static const int	_bits = 8;
	public:
			Fixed(Fixed& original);
			Fixed();
			~Fixed();
			Fixed&	operator=(Fixed& rhs);
			int		getRawBits();
			void	setRawBits(int const raw);

};

#endif