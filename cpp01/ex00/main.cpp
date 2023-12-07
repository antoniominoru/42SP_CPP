/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:17:41 by aminoru-          #+#    #+#             */
/*   Updated: 2023/10/31 12:20:02 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	foo = Zombie("Foo");
	Zombie*	bee;

	bee = newZombie("Bee");
	
	std::cout << "Zombie on stack:" << std::endl;
	foo.announce();
	
	std::cout << "Zombie on heap:" << std::endl;
	bee->announce();
	
	std::cout << "Function randowChump:" << std::endl;
	randomChump("r2d2");
	
	delete(bee);
	return (0);
}
