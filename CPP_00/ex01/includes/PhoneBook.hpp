#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# define MAX_CONTACTS 9
# include "Contact.hpp"

class PhoneBook
{
	private:
			int _lastIndex;
			Contact _contacts[MAX_CONTACTS];

	public: 
			PhoneBook();
			~PhoneBook();
			void	addContact(void);
			void	searchContact(void)const;


};

#endif