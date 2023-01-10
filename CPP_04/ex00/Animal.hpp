/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:47:51 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/09 13:47:51 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	protected:
				std::string	_type;
	public:
			Animal(std::string type = "Animal");
			Animal(Animal const &og);
			virtual ~Animal();
			Animal& operator=(Animal const &rhs);
			std::string getType() const;
			virtual void makeSound() const;
};

#endif