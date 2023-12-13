/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 00:17:30 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/12 20:21:57 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal") 
{
	std::cout << "Default constructor Animal called." << std::endl;
	return;
}

Animal::Animal(Animal const& copy)
{
	std::cout << "Copy constructor Animal called." << std::endl;
	*this = copy;
}

Animal::~Animal(void)
{
	std::cout << "Destructor Animal called." << std::endl;
	return;
}

Animal& Animal::operator=(Animal const & src)
{
	if (this != &src)
		this->setType(src.getType());
	std::cout << "Copy assignment Animal operator called." << std::endl;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return(this->_type);
}

void	Animal::setType(std::string type)
{
	this->_type = type;
}

void	Animal::makeSound(void) const
{
	std::cout << "This " << this->_type << " does not make sounds."  << std::endl;
}