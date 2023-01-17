/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:55:51 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/11 15:18:34 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	private:
			std::string	_ideas[100];
	public:
			Brain();
			Brain(Brain &og);
			~Brain();
			Brain &operator=(Brain &rhs);
			void	setIdea(int i, std::string val);
			std::string	getIdea(int i);
};

#endif