/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:57:04 by aminoru-          #+#    #+#             */
/*   Updated: 2023/11/07 12:04:00 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name ) : _name(name), _weapon(NULL)
{
	return;
}

HumanB::~HumanB( void )
{
	return;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack( void )
{
	std::cout << this->_name << " attacks ";
	if (this->_weapon != nullptr)
		std::cout << "with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << "unarmed" << std::endl;
}
