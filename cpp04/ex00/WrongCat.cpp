/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 19:57:15 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/12 20:22:54 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal() 
{
	this->_type = "WrongCat";
	std::cout << "Default constructor WrongCat called." << std::endl;
	return;
}
WrongCat::WrongCat(WrongCat const& copy) : WrongAnimal() 
{
	std::cout << "Copy constructor WrongCat called." << std::endl;
	*this = copy;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Destructor WrongCat called." << std::endl;
	return;
}

WrongCat& WrongCat::operator=(WrongCat const & src)
{
	if (this != &src)
		this->_type = src.getType();
	std::cout << "Copy assignment WrongCat operator called." << std::endl;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "The " << this->_type << " miaaWs." << std::endl;
}

