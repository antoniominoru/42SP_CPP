/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:50:53 by aminoru-          #+#    #+#             */
/*   Updated: 2023/10/18 13:06:04 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

std::string Contact::getFirstName(void) const
{
	return (this->_firstName);
}

void Contact::setFirstName(std::string firstName)
{
	this->_firstName = firstName;
}

std::string Contact::getLastName(void) const
{
	return (this->_lastName);
}

void Contact::setLastName(std::string lastName)
{
	this->_lastName = lastName;	
}

std::string Contact::getNickName(void) const
{
	return (this->_nickName);
}

void Contact::setNickName(std::string nickName)
{
	this->_nickName = nickName;
}

std::string Contact::getPhoneNumber(void) const
{
	return (this->_phoneNumber);
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
	this->_phoneNumber = phoneNumber;
}


std::string Contact::getSecretCode(void) const
{
	return (this->_secretCode);
}

void Contact::setSecretCode(std::string secretCode)
{
	this->_secretCode = secretCode;
}
