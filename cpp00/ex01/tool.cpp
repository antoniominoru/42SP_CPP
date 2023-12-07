/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:45:54 by aminoru-          #+#    #+#             */
/*   Updated: 2023/10/26 12:15:33 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	PhoneBook::_getIndex()
{
	int			index;
	std::string	buffer;

	std::cout << std::endl;
	while (1){
		std::cout << "Enter the index of the contact to display:" << std::endl;
		std::getline(std::cin, buffer);
		if (std::cin.eof())
           exit(0);
		if (buffer.size() != 1 || !std::isdigit(buffer[0]))
		{
			std::cout << "Invalid index." << std::endl;
			continue;
		}
		std::istringstream ss(buffer);
		if (!(ss >> index)  || !ss.eof())
		{
			std::cout << "Invalid index." << std::endl;
			continue;
		}
		if (index < 0 || index >= this->_numbContacts){
			std::cout << "Invalid index." << std::endl;
			continue;
		}
		break ;
	}
	printSingleContact(index);
	std::cin.clear();
}

std::string	PhoneBook::_truncateString(std::string contact)
{
	if (contact.length() > 9){
		contact = contact.substr(0, 9) + ".";
	}
	return (contact);
}

void	PhoneBook::_printContact(int i)
{
	std::cout << std::setw(10) << std::right << i << "|"
		<< std::setw(10) << std::right << PhoneBook::_truncateString(this->_contacts[i].getFirstName()) << "|"
		<< std::setw(10) << std::right << PhoneBook::_truncateString(this->_contacts[i].getLastName()) << "|"
		<< std::setw(10) << std::right << PhoneBook::_truncateString(this->_contacts[i].getNickName()) << "|";
	std::cout << std::endl;
}

void	PhoneBook::_addContact(std::string info[5])
{
	Contact	contact;

	contact.setFirstName(info[0]);
	contact.setLastName(info[1]);
	contact.setNickName(info[2]);
	contact.setPhoneNumber(info[3]);
	contact.setSecretCode(info[4]);
	this->_contacts[this->_index] = contact;
	this->_index = (this->_index + 1) % 8;
	if (this->_numbContacts < 8)
		this->_numbContacts++;
	std::cout << "Contact has been added" << std::endl;
}

std::string PhoneBook::_getInput(std::string input, bool testPhoneNumber)
{
	std::string inputAdd;
	
	while (inputAdd.empty())
	{
		if (std::cin.eof())
			exit(0);
		std::cout << input << std::endl;
		std::getline(std::cin, inputAdd);
		if (_checkSpaces(inputAdd))
			inputAdd = "";
		if (testPhoneNumber && !PhoneBook::_checkPhone(inputAdd))
			inputAdd = "";	
	}
	return (inputAdd);
}

bool PhoneBook::_checkPhone(std::string phoneNumber)
{
	int i = -1;

	while (phoneNumber[++i])
	{
		if (std::cin.eof())
			exit(0);
		if (!std::isdigit(phoneNumber[i]))
		{
			std::cout << "Phone number must only contain numbers" << std::endl;
			return (false);
		}
	}
	if (phoneNumber.size() < 7 || phoneNumber.size() > 14){
		std::cout << "The size of the phone number must be between 7 and 14." << std::endl;
		return (false);
	}
	return (true);
}

bool PhoneBook::_checkSpaces(const std::string& str)
{
	return str.find_first_not_of(' ') == std::string::npos;
}
