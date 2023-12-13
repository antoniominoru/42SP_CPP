/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 00:17:30 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/12 20:26:28 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("AAnimal") {
	std::cout << "Default constructor AAnimal called." << std::endl;
	return;
}

AAnimal::AAnimal(AAnimal const& copy){
	std::cout << "Copy constructor AAnimal called." << std::endl;
	*this = copy;
}

AAnimal::~AAnimal(void){
	std::cout << "Destructor AAnimal called." << std::endl;
	return;
}

AAnimal& AAnimal::operator=(AAnimal const & src){
	if (this != &src)
		this->_type = src.getType();
	std::cout << "Copy assignment AAnimal operator called." << std::endl;
	return (*this);
}

std::string	AAnimal::getType(void) const{
	return(this->_type);
}

void	AAnimal::setType(std::string type){
	this->_type = type;
}
