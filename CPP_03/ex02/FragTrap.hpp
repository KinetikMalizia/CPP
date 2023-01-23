/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:28:37 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/23 11:28:37 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
			FragTrap(std::string name);
			FragTrap(FragTrap const& og);
			FragTrap();
			~FragTrap();
			void	attack(const std::string& target);
			void	highFivesGuys(void);
};

#endif