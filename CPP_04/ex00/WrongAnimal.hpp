#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {
	protected:
		std::string	_type;

	public:
		WrongAnimal( void );
		WrongAnimal( WrongAnimal const & src );
		~WrongAnimal( void );

		WrongAnimal	&operator=( WrongAnimal const & src );

		void		set_type( std::string const value );

		std::string	get_type( void ) const;

};

#endif
