/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 20:04:59 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/12 19:39:52 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap()
{
	this->setName("T1000");
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "Default constructor of ScavTrap called." <<std::endl;
}

ScavTrap::ScavTrap( std::string const & name ) : ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "Constructor with parameter of ScavTrap called." <<std::endl;
}

ScavTrap::ScavTrap( ScavTrap const& copy ) : ClapTrap()
{
	std::cout << "Copy constructor of ScavTrap called." <<std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "Destructor of ScavTrap called." << this->getName() <<std::endl;
	return;
}

ScavTrap& ScavTrap::operator=( ScavTrap const & src )
{
	if (this != &src)
	{
		this->setName(src.getName());
		this->setHitPoints(src.getHitPoints());
		this->setEnergyPoints(src.getEnergyPoints());
		this->setAttackDamage(src.getAttackDamage());
	}
	std::cout << "Copy assignment operator of ScavTrap" << this->getName() << std::endl;
	return (*this);
}

void ScavTrap::attack( const std::string& target )
{
	if ( this->getEnergyPoints() > 0 && this->getHitPoints() > 0)
	{
		std::cout << "ScavTrap " << this->getName();
		std::cout << " attacks " << target << ", causing " << this->getAttackDamage();
		std::cout << " points of damage!" << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
	} else {
		if (this->getEnergyPoints() <= 0)
			std::cout << "ScavTrap " << this->getName() << ", has no energy points." << std::endl;
		if (this->getHitPoints() <= 0)
			std::cout << "ScavTrap " << this->getName() << ", has no hit points." << std::endl;
	}
}

void ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode." << std::endl;
}
