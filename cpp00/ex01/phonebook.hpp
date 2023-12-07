/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:31:22 by aminoru-          #+#    #+#             */
/*   Updated: 2023/10/26 12:11:42 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <sstream> 

class PhoneBook {
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void 		add(void);
		void		searchContact();
		void		printSingleContact(int index);
	
	private:
		Contact		_contacts[8];
		int			_numbContacts;
		int			_index;
		
		bool		_checkSpaces(const std::string& str);
		bool		_checkPhone(std::string phone);
		void		_addContact(std::string info[5]);
		void		_printContact(int i);
		void		_getIndex();
		std::string	_truncateString(std::string contact);
		std::string	_getInput(std::string input, bool testPhoneNumber);
};

#endif