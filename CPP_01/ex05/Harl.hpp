/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:01:16 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/16 11:01:16 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class	Harl
{
private:
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );


public:
	Harl();
	~Harl();

	void	complain( std:: string level );

};

typedef void (Harl::*t_func) ( void );

#endif