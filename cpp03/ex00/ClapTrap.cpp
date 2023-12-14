/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 01:13:37 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/12 19:39:03 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) :  _name("T1000"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called." << std::endl;
	return;
}

ClapTrap::ClapTrap( std::string const& name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Constructor with name called." << std::endl;
	return;
}

ClapTrap::ClapTrap( ClapTrap const& copy )
{
	std::cout << "Copy constructor called." << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "Destructor called." << this->getName() << std::endl;
	return;
}

ClapTrap& ClapTrap::operator=( ClapTrap const & src )
{
	if (this != &src)
	{
		this->_name = src.getName();
		this->_hitPoints = src.getHitPoints();
		this->_energyPoints = src.getEnergyPoints();
		this->_attackDamage = src.getAttackDamage();
	}
	std::cout << "Copy assignment operator" << std::endl;
	return (*this);
}

void ClapTrap::setName( std::string const &name )
{
	this->_name = name;
}

void ClapTrap::setHitPoints( int hitPoints )
{
	this->_hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints( int energy )
{
	this->_energyPoints = energy;
}

void ClapTrap::setAttackDamage( int attack )
{
	this->_attackDamage = attack;
}

std::string ClapTrap::getName( void ) const 
{
	return (this->_name);
}

int ClapTrap::getHitPoints( void ) const
{
	return (this->_hitPoints);
}

int ClapTrap::getEnergyPoints( void ) const
{
	return (this->_energyPoints);
}

int ClapTrap::getAttackDamage( void ) const
{
	return (this->_attackDamage);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0)
	{
		std::cout << "ClapTrap " << this->getName();
		std::cout << " attack " << target << ", causing " << this->getAttackDamage();
		std::cout << " points of damage!" << std::endl;
		this->_energyPoints--;
	} else {
		if (this->getEnergyPoints() <= 0)
			std::cout << "ClapTrap " << this->getName() << ", has no energy points." << std::endl;
		if (this->getEnergyPoints() <= 0)
			std::cout << "ClapTrap " << this->getName() << ", has no hit points." << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if ((int)amount > 0)
	{
		this->_hitPoints -= (int)amount;
		std::cout << "ClapTrap " << this->getName();
		std::cout << " takes " << amount << " points of damage. Total hit points: ";
		std::cout << this->getHitPoints() << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0 && (int)amount >= 0)
	{
		std::cout << "ClapTrap " << this->getName();
		std::cout << " repairs itself. It gets " << amount << " hit points back." << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints--;
	} else {
		if (this->getEnergyPoints() <= 0)
		{
			std::cout << "ClapTrap " << this->getName() << ", unable to repair itself. Energy point = ";
			std::cout << this->getEnergyPoints() << std::endl;
		}
		if (this->getHitPoints() <= 0)
		{
			std::cout << "ClapTrap " << this->getName() << ", unable to repair itself. Hit points = ";
			std::cout << this->getHitPoints() << std::endl;
		}
	}
}
