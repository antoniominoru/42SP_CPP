/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 19:48:51 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/12 20:22:07 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal() 
{
	this->setType("Cat");
	std::cout << "Default constructor Cat called." << std::endl;
	return;
}

Cat::Cat(Cat const& copy) : Animal() 
{
	std::cout << "Copy constructor Cat called." << std::endl;
	*this = copy;
}

Cat::~Cat(void)
{
	std::cout << "Destructor Cat called." << std::endl;
	return;
}

Cat& Cat::operator=(Cat const & src)
{
	if (this != &src)
		this->setType(src.getType());
	std::cout << "Copy assignment Cat operator called." << std::endl;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "The " << this->_type << " miaawws"<< std::endl;
}
