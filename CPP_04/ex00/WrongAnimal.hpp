#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal {
	protected:
		std::string	_type;

	public:
		WrongAnimal( void );
		WrongAnimal(std::string type);
		WrongAnimal( WrongAnimal const & src );
		virtual ~WrongAnimal( void );

		WrongAnimal	&operator=( WrongAnimal const & src );

		void		set_type( std::string const value );

		std::string	get_type( void ) const;

		virtual void makeSound() const;

};

#endif
