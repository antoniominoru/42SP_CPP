/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 19:48:51 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/12 20:21:05 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal() 
{
	this->setType("Cat");
	this->_brain = new Brain();
	std::cout << "Default constructor Cat called." << std::endl;
	return;
}

Cat::Cat(Cat const& copy) : Animal() 
{
	std::cout << "Copy constructor Cat called." << std::endl;
	this->setType(copy._type);
	this->_brain = new Brain();
	*this = copy;
}

Cat::~Cat(void)
{
	std::cout << "Destructor Cat called." << std::endl;
	delete (this->_brain);
	return;
}

Cat& Cat::operator=(Cat const & src)
{
	if (this != &src){
		this->setType(src.getType());
		*(this->_brain) = *(src.getBrain());
	}
	std::cout << "Copy assignment Cat operator called." << std::endl;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "The " << this->_type << " miaawws"<< std::endl;
}

Brain*	Cat::getBrain(void) const
{
	return (this->_brain);
}
