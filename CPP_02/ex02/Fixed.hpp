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
			int	operator>>(Fixed const& rhs) const;
			int	operator<<(Fixed const& rhs) const;
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
			Fixed&	operator++(void) const;
			Fixed&	operator--(void) const;
			/*Postfix F++ F--*/
			Fixed	operator*(int n) const;
			Fixed	operator/(int n) const;
};

std::ostream& operator<<(std::ostream& o, Fixed const& rhs);

#endif