/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:36:07 by fmalizia          #+#    #+#             */
/*   Updated: 2023/02/06 12:30:21 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <stdexcept>
# include <iostream>

template <typename T> class Array
{
	private:
			T*				_ptr;
			unsigned int	_size;
	public:
			Array(void):  _ptr(new T()), _size(0){std::cout << "Default constructor\n";};
			Array(unsigned int n): _ptr(new T[n]), _size(n)
			{
				for (unsigned int i=0; i < this->_size; i++)
<<<<<<< HEAD
					this->_ptr[i] = 0;
=======
					_ptr[i] = 0;
>>>>>>> 1d2b6f25b816e9bd2d260f44b905d20fea9378df
				std::cout << "Sized constructor\n";
			};
			Array(Array &og): _ptr(new T[og.size()]), _size(og.size())
			{
				for (unsigned int i=0; i < this->_size; i++)
					_ptr[i] = og._ptr[i];
			};

			~Array(void){delete[] this->_ptr;};

			Array& operator=(Array &rhs)
			{
				if (this  != &rhs)
				{
					delete[] this->_ptr;
					this->_ptr = new T[rhs.size()];
					this->_size = rhs.size();
					for (unsigned int i=0; i < this->_size; i++)
						_ptr[i] = rhs._ptr[i];
				}
				return (*this);
			};

			T &operator[](unsigned int n)
			{
				if (n >= this->_size)
					throw std::out_of_range("INDEX IS OUT OF RANGE");
				else
					return (this->_ptr[n]);
			};

			unsigned int	size(void) {return (this->_size);};
};

template < typename T >
std::ostream& operator<<( std::ostream& out, Array<T>& arr )
{
	for (unsigned int i=0; i < arr.size(); i++ )
		out << arr[i] << " ";
	return out;
}

#endif