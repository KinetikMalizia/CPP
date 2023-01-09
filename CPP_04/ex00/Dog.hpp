/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:48:07 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/09 14:45:03 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
#include "Animal.hpp"

class Dog : public Animal
{
	private:
			std::string	_type;
	public:
			Dog(Dog &og);
			Dog();
			~Dog();
			Dog &operator=(Dog &rhs);
			void makeSound() const;
};

#endif