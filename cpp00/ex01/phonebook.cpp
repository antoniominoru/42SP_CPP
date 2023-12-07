/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:34:17 by aminoru-          #+#    #+#             */
/*   Updated: 2023/10/26 12:13:14 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(void) : _numbContacts(0), _index(0)
{
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

void PhoneBook::add(void)
{
	std::string input[5];

	std::cout << "Add the following information." << " Fields cannot be empty or contain only spaces." << std::endl;
	input[0] = PhoneBook::_getInput("Enter the first name:", false);
	input[1] = PhoneBook::_getInput("Enter the last name:", false);
	input[2] = PhoneBook::_getInput("Enter the nickname:", false);
	input[3] = PhoneBook::_getInput("Enter phone number:", true);
	input[4] = PhoneBook::_getInput("Enter darkest secret:", false);
	PhoneBook::_addContact(input);
}

void PhoneBook::searchContact()
{
	int i;

	if (this->_numbContacts == 0)
	{
		std::cout << "No contacts found." << std::endl;
		return;
	}
	std::cout << "================Contact list================" << std::endl;
    std::cout << std::setw(10) << std::right << "Index" << "|"
    	<< std::setw(10) << std::right << "First name" << "|"
		<< std::setw(10) << std::right << "Last name" << "|"
    	<< std::setw(10) << std::right << "Nickname" << "|" << std::endl;
	i = -1;
	while (++i < this->_numbContacts)
	{
		PhoneBook::_printContact(i);
	}
	std::cout << "============================================" << std::endl;
	PhoneBook::_getIndex();
}

void	PhoneBook::printSingleContact(int index)
{
	std::cout << std::endl;
	std::cout << "First name: " << this->_contacts[index].getFirstName() << std::endl;
	std::cout << "Last name: " << this->_contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << this->_contacts[index].getNickName() << std::endl;
	std::cout << "Phone number: " << this->_contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << this->_contacts[index].getSecretCode() << std::endl << std::endl;
}
