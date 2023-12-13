/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 19:54:45 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/12 20:19:33 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal() 
{
	this->setType("Dog");
	this->_brain = new Brain();
	std::cout << "Default constructor Dog called." << std::endl;
	return;
}

Dog::Dog(Dog const& copy) : Animal() 
{
	std::cout << "Copy constructor Dog called." << std::endl;
	this->setType(copy._type);
	this->_brain = new Brain();
	*this = copy;
}

Dog::~Dog(void)
{
	std::cout << "Destructor Dog called." << std::endl;
	delete (this->_brain);
	return;
}

Dog& Dog::operator=(Dog const & src)
{
	if (this != &src){
		this->setType(src.getType());
		*(this->_brain) = *(src.getBrain());
	}
	std::cout << "Copy assignment Dog operator called." << std::endl;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "The " << this->_type << " barks" << std::endl;
}

Brain*	Dog::getBrain(void) const
{
	return (this->_brain);
}
