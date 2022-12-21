/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:22:32 by fmalizia          #+#    #+#             */
/*   Updated: 2022/12/21 16:12:32 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>
# include <iomanip>

class Zombie
{
	private:
			std::string _name;
	public:
			Zombie(std::string name);
			Zombie();
			~Zombie();
			void	announce(void) const;
};


Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif