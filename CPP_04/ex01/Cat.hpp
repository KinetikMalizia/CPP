/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:47:57 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/09 13:47:57 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
			Brain	*_brain;
	public:
			Cat(Cat &og);
			Cat();
			~Cat();
			Cat		&operator=(Cat &rhs);
			void	makeSound() const;
			void	setIdea(int i, std::string val);
			std::string	getIdea(int i);
};

#endif