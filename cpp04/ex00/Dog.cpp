/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 19:54:45 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/12 20:22:17 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal() 
{
	this->setType("Dog");
	std::cout << "Default constructor Dog called." << std::endl;
	return;
}

Dog::Dog(Dog const& copy) : Animal() 
{
	std::cout << "Copy constructor Dog called." << std::endl;
	*this = copy;
}

Dog::~Dog(void)
{
	std::cout << "Destructor Dog called." << std::endl;
	return;
}

Dog& Dog::operator=(Dog const & src)
{
	if (this != &src)
		this->setType(src.getType());
	std::cout << "Copy assignment Dog operator called." << std::endl;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "The " << this->_type << " barks" << std::endl;
}
