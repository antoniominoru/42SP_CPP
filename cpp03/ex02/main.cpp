/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 01:15:52 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/10 23:53:16 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	{
		ClapTrap	ct1;
		for (int i = ct1.getEnergyPoints(); 0 < ct1.getEnergyPoints(); ct1.setEnergyPoints(--i)){
			ct1.attack("c3po");
		}
		ct1.attack("r2d2");
		std::cout << std::endl;
	}
	{
		ClapTrap	ct;

		while (ct.getHitPoints())
			ct.takeDamage(5);
		ct.attack("c3po");
		std::cout << std::endl;
	}
	{
		FragTrap	c3po;
		FragTrap	r2d2("r2d2");
		FragTrap	r2d2Cpy = r2d2;
		FragTrap	freddy(c3po);

		c3po.highFivesGuys();
		c3po.attack(r2d2.getName());
		r2d2.beRepaired(15);

		r2d2Cpy.highFivesGuys();
		r2d2Cpy.attack(freddy.getName());
		r2d2Cpy.takeDamage(r2d2Cpy.getAttackDamage());
		std::cout << std::endl;

		r2d2.highFivesGuys();
		r2d2.attack(r2d2Cpy.getName());
		r2d2Cpy.takeDamage(r2d2Cpy.getAttackDamage());
		r2d2Cpy.beRepaired(5);
		std::cout << std::endl;

		freddy.highFivesGuys();
		freddy.attack(c3po.getName());
		c3po.takeDamage(c3po.getAttackDamage());
		c3po.beRepaired(2);
		std::cout << std::endl;

		r2d2Cpy.setEnergyPoints(0);
		r2d2Cpy.attack(freddy.getName());
		r2d2Cpy.beRepaired(3);
		std::cout << std::endl;
	}
	return (0);
}
