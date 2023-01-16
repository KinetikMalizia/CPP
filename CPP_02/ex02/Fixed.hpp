/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:46:46 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/16 13:46:46 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
			int					_value;
			static const int	_bits = 8;
	public:
			Fixed(Fixed const& original);
			Fixed(const int integer);
			Fixed(const float flo);
			Fixed();
			~Fixed();
			int		getRawBits()const;
			void	setRawBits(int const raw);
			float	toFloat() const;
			int		toInt() const;

			/*Operators overlaod*/

			Fixed&	operator=(Fixed const& rhs);
			int	operator>(Fixed const& rhs) const;
			int	operator<(Fixed const& rhs) const;
			int	operator>=(Fixed const& rhs) const;
			int	operator<=(Fixed const& rhs) const;
			int	operator==(Fixed const& rhs) const;
			int	operator!=(Fixed const& rhs) const;

			/* + - * / */
			Fixed	operator+(Fixed const& rhs) const;
			Fixed	operator-(Fixed const& rhs) const;
			Fixed	operator*(Fixed const& rhs) const;
			Fixed	operator/(Fixed const& rhs) const;

			/*Prefix ++F --F*/
			Fixed	&operator++(void);
			Fixed	&operator--(void);
			/*Postfix F++ F--*/
			Fixed	operator++(int n);
			Fixed	operator--(int n);

			/*min  max*/
			static Fixed &min(Fixed &a, Fixed &b);
			static const Fixed &min(const Fixed &a, const Fixed &b);
			static Fixed &max(Fixed &a, Fixed &b);
			static const Fixed &max(const Fixed &a, const Fixed &b);

};

std::ostream& operator<<(std::ostream& o, Fixed const& rhs);

#endif