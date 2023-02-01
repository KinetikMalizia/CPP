/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:02:57 by jcarlen           #+#    #+#             */
/*   Updated: 2023/02/01 15:05:57 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <fstream>
# include <limits>
# include <string>

class Converter
{
	private:
			const std::string	_value;
			int		Cint();
			char 	Cchar();
			float	Cfloat();
			double 	Cdouble();


	public:
			Converter();
			~Converter();
			Converter(const std::string& value);
			Converter(Converter &og);
			Converter	&operator=(Converter const &rhs);


			void	Print_1(std::string av);
			void	Print_2(std::string av);
			void 	Convert(std::string av);

};

#endif