#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
	private:
			int			_index;
			std::string	_firstName;
			std::string	_lastName;
			std::string	_nickname;
			std::string	_phoneNumber;
			std::string	_secret;

	public:
			Contact();
			~Contact();
			void	fillContact(int index);
			void	displayContact(void)const;
			void	displayContactDetail(void)const;

			int	getIndex(void) const
			{
				return (_index);
			}
};

#endif