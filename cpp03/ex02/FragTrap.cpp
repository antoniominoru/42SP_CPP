/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 23:45:26 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/12 19:44:09 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap()
{
	this->setName("T1000");
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "Default constructor of FragTrap called." <<std::endl;
}

FragTrap::FragTrap( std::string const & name ) : ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "Constructor with parameter of FragTrap called." <<std::endl;
}

FragTrap::FragTrap( FragTrap const& copy ) : ClapTrap()
{
	std::cout << "Copy constructor of FragTrap called." <<std::endl;
	*this = copy;
}

FragTrap::~FragTrap( void )
{
	std::cout << "Destructor of FragTrap called." << this->getName() <<std::endl;
	return;
}

FragTrap& FragTrap::operator=( FragTrap const & src )
{
	if (this != &src)
	{
		this->setName(src.getName());
		this->setHitPoints(src.getHitPoints());
		this->setEnergyPoints(src.getEnergyPoints());
		this->setAttackDamage(src.getAttackDamage());
	}
	std::cout << "Copy assignment operator of FragTrap " << this->getName() << std::endl;
	return (*this);
}

void FragTrap::attack( const std::string& target )
{
	if ( this->getEnergyPoints() > 0 && this->getHitPoints() > 0)
	{
		std::cout << "FragTrap " << this->getName();
		std::cout << " attacks " << target << ", causing " << this->getAttackDamage();
		std::cout << " points of damage!" << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
	} else {
		if (this->getEnergyPoints() <= 0)
			std::cout << "FragTrap " << this->getName() << ", has no energy points." << std::endl;
		if (this->getHitPoints() <= 0)
			std::cout << "FragTrap " << this->getName() << ", has no hit points." << std::endl;
	}
}

void FragTrap::highFivesGuys( void )
{
	std::cout << this->getName() << ": High five guys!" << std::endl;
}