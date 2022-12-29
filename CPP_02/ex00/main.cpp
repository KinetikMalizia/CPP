#include "Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed b( a );
	Fixed c;
	Fixed d;

	c.setRawBits(34);
	d = c;
	std::cout << "a: " << a.getRawBits() << std::endl;
	std::cout << "b: " << b.getRawBits() << std::endl;
	std::cout << "c: " << c.getRawBits() << std::endl;
	std::cout << "d: " << d.getRawBits() << std::endl;

	return 0;
}