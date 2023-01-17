/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:48:07 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/11 14:51:57 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	private:
			Brain	*_brain;
	public:
			Dog(Dog &og);
			Dog();
			~Dog();
			Dog &operator=(Dog &rhs);
			void makeSound() const;
			void	setIdea(int i, std::string val);
			std::string	getIdea(int i);
};

#endif