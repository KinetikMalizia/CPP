#include <string>
#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
	std::fstream	in;
	std::string	out_name = (std::string)av[1] + ".replace";
	std::ofstream	out(out_name);

	if (ac != 4)
	{
		std::cout << "Wrong syntax... [./out] <filename> <s1> <s2>\n";
	}
	in.open(av[1], std::ios::in);
}