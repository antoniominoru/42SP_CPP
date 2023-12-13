/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:58:43 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/12 20:04:10 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal*		meta = new Animal();
	const Animal*		j = new Dog();
	const Animal*		i = new Cat();
	const WrongAnimal*	wrg = new WrongAnimal();
	const WrongAnimal*	wrgC = new WrongCat();

	std::cout << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << wrg->getType() << " " << std::endl;
	std::cout << wrgC->getType() << " " << std::endl;
	std::cout << std::endl;

	j->makeSound();
	i->makeSound();
	meta->makeSound();
	wrg->makeSound();
	wrgC->makeSound();
	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;
	delete wrg;
	delete wrgC;
	
	std::cout << std::endl;

	return (0);
}
