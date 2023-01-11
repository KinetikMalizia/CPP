/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:54:48 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/11 14:07:27 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal {
	protected:
		std::string	_type;

	public:
		WrongAnimal(std::string type = "Wrong");
		WrongAnimal( WrongAnimal const & src );
		virtual ~WrongAnimal( void );

		WrongAnimal	&operator=( WrongAnimal const & src );

		void		set_type( std::string const value );

		std::string	get_type( void ) const;

		virtual void makeSound() const;

};

#endif
