/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 01:15:52 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/10 03:14:33 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	orc;
	ClapTrap	elfo;
	ClapTrap	mago("mago");
	ClapTrap	magoCpy = mago;
	ClapTrap	storm(magoCpy);

	std::cout << "Orc attacks elfo" << std::endl;
	orc.attack(elfo.getName());
	elfo.takeDamage(elfo.getAttackDamage());
	elfo.beRepaired(10);
	std::cout << std::endl;

	std::cout << "Elfo attacks mago" << std::endl;
	elfo.attack(mago.getName());
	mago.takeDamage(mago.getAttackDamage());
	mago.beRepaired(5);
	std::cout << std::endl;

	std::cout << "mago attacks storm" << std::endl;
	mago.attack(storm.getName());
	storm.takeDamage(storm.getAttackDamage());
	storm.beRepaired(6);
	std::cout << std::endl;

	std::cout << "Storm attacks orc" << std::endl;
	storm.attack(orc.getName());
	orc.takeDamage(orc.getAttackDamage());
	orc.beRepaired(4);
	std::cout << std::endl;

	std::cout << "orc attacks magoCpy" << std::endl;
	magoCpy.takeDamage(10);
	orc.attack(magoCpy.getName());
	magoCpy.beRepaired(2);
	std::cout << std::endl;

	std::cout << "magoCpy attacks elfo" << std::endl;
	magoCpy.setEnergyPoints(0);
	magoCpy.attack(elfo.getName());
	std::cout << std::endl;

	std::cout << "magoCpy attacks mago" << std::endl;
	mago.setEnergyPoints(0);
	magoCpy.attack(mago.getName());
	mago.beRepaired(3);
	std::cout << std::endl;
	return (0);
}
