/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:02:52 by jcarlen           #+#    #+#             */
/*   Updated: 2023/02/01 15:29:57 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <iostream>
#include <iomanip>

/*
**	uintptr_t:
**	"An unsigned integer type with the property that any valid pointer to void
**	can be converted to this type, then converted back to pointer to void,
**	and the result will compare equal to the original pointer"
*/

typedef struct	s_data 
{
	std::string test;

}				Data;

uintptr_t	serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		deserialize(uintptr_t raw) 
{
	return reinterpret_cast<Data *>(raw);
}

int	main( void )
{
	Data data;

	data.test = "ceci est un test";
	Data *ptr = &data;
	uintptr_t nb = 0;
	
	std::cout << "string = " << data.test << std::endl;
	std::cout << "ptr = " << ptr << std::endl;
	std::cout << "uintptr = " << nb << std::endl;
	nb = serialize(ptr);
	std::cout << "nb = " << nb << std::endl; // this will print an undifined value
	ptr = deserialize(nb);
	std::cout << "ptr -> name = " << ptr->test << std::endl; // this will print string test
}
