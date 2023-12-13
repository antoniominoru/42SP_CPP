/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 19:56:32 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/12 20:21:31 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal") 
{
	std::cout << "Default constructor WrongAnimal called." << std::endl;
	return;
}

WrongAnimal::WrongAnimal(std::string const& type): _type(type) 
{
	std::cout << "Type constructor WrongAnimal called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& copy) 
{
	std::cout << "Copy constructor WrongAnimal called." << std::endl;
	*this = copy;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Destructor WrongAnimal called." << std::endl;
	return;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const & src)
{
	if (this != &src)
		this->_type = src.getType();
	std::cout << "Copy assignment WrongAnimal operator called." << std::endl;
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return(this->_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "The " << this->_type << " make some sound." << std::endl;
}
