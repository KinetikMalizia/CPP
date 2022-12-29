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
			Fixed&	operator=(Fixed const& rhs);
			float	operator<<(Fixed& rhs);
			int		getRawBits()const;
			void	setRawBits(int const raw);
			float	toFloat() const;
			int		toInt() const;
};

std::ostream& operator<<(std::ostream& o, Fixed const& rhs);

#endif