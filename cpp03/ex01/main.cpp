/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 01:15:52 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/10 23:51:56 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	{
		ClapTrap	ct1;
		for (int i = ct1.getEnergyPoints(); 0 < ct1.getEnergyPoints();
			ct1.setEnergyPoints(--i)){
			ct1.attack("rd2d2");
		}
		ct1.attack("c3po");
		std::cout << std::endl;
	}
	{
		ClapTrap	ct;

		while (ct.getHitPoints())
			ct.takeDamage(5);
		ct.attack("Evangeliun");
		std::cout << std::endl;
	}
	{
		ScavTrap	c3po;
		ScavTrap	r2d2("r2d2");
		ScavTrap	r2d2Cpy = r2d2;

		std::cout << "c3po attacks r2d2" << std::endl;
		c3po.attack(r2d2.getName());
		r2d2.takeDamage(r2d2.getAttackDamage());
		r2d2.beRepaired(15);
		r2d2.guardGate();
		std::cout << std::endl;

		std::cout << "r2d2 attacks r2d2 copy" << std::endl;
		r2d2.attack(r2d2Cpy.getName());
		r2d2Cpy.takeDamage(r2d2Cpy.getAttackDamage());
		r2d2Cpy.beRepaired(5);
		r2d2Cpy.guardGate();
		std::cout << std::endl;

		std::cout << "r2d2Cpy attacks c3po" << std::endl;
		r2d2Cpy.setEnergyPoints(0);
		r2d2Cpy.attack(c3po.getName());
		r2d2Cpy.guardGate();
		std::cout << std::endl;
	}

	return (0);
}
