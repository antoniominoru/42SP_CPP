/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:48:47 by aminoru-          #+#    #+#             */
/*   Updated: 2023/11/06 11:56:08 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type)
{
	return;
}

Weapon::~Weapon( void )
{
	return;
}

std::string Weapon::getType( void )
{
	return (this->_type);
}

void Weapon::setType( std::string type)
{
	this->_type = type;
}
