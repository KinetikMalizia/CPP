#include <string>
#include <iostream>
#include <fstream>

std::string	ft_replace(std::string buffer, std::string find, std::string replace)
{
	size_t	erase_length = find.length();
	size_t	replace_length = replace.length();
	size_t	pos_search = 0;

	pos_search = buffer.find(find);
	while (pos_search != std::string::npos)
	{
		buffer.erase(pos_search, erase_length);
		buffer.insert(pos_search, replace);
		pos_search = buffer.find(find, pos_search + replace_length);
	}
	return (buffer);
}

int	main(int ac, char **av)
{
	std::ifstream	in(av[1]);

	if (ac != 4)
	{
		std::cout << "Wrong syntax... [./out] <filename> <s1> <s2>\n";
		return (1);
	}
	if (!in.is_open())
	{
		std::cout << "Coulnd't open the input file" << std::endl;
		return (-1);
	}
	std::string	out_name = (std::string)av[1] + ".replace";
	std::ofstream	out;
	out.open(out_name, std::ios::out | std::ios::trunc);
	if (!out.is_open())
	{
		std::cout << "Coulnd't open the input file" << std::endl;
		return (-1);
	}
	std::string	buffer;
	std::string	find = (std::string)av[2];
	std::string	replace = (std::string)av[3];
	while (std::getline(in, buffer))
	{
		buffer = ft_replace(buffer, find, replace);
		out << buffer;
		if (in.peek() != EOF)
			out << std::endl;
	}
	out << std::endl;
	out.close();
	in.close();
	while (1)
	{

	}
	return (0);
}