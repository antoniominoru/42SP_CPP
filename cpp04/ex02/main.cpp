/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:58:43 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/12 20:27:53 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

static void	subjectMain(void){
	const AAnimal*		j = new Dog();
	const AAnimal*		i = new Cat();
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
	wrg->makeSound();
	wrgC->makeSound();
	std::cout << std::endl;

	delete j;
	delete i;
	delete wrg;
	delete wrgC;
	std::cout << std::endl;
}

static void	arrayAnimals(void){
	std::cout << "=======Animals array=======" << std::endl;
	const AAnimal* animals[100];
	for (int i = 0; i < 50; i++){
		std::cout << "Dog number " << i + 1 << std::endl;
		animals[i] = new Dog();
		std::cout << animals[i]->getType() << std::endl;
		animals[i]->makeSound();
	}
	for (int i = 50; i < 100; i++){
		std::cout << "Cat number " << i + 1 << std::endl;
		animals[i] = new Cat();
		std::cout << animals[i]->getType() << std::endl;
		animals[i]->makeSound();
	}
	std::cout << std::endl;
	std::cout << "=======Delete animals=======" << std::endl;
	for (int i = 0; i < 100; i++) {
        std::cout << "Delete animal " << i + 1 << std::endl;
		delete animals[i];
    }
	std::cout << std::endl;
}

static void	copies(void){
	std::cout << "==========Copies===========" << std::endl;

	{
		Cat* cat = new Cat();
		Cat copyCat = *cat;

		cat->getBrain()->setIdeas(0, "I am a cat.");
		copyCat.getBrain()->setIdeas(0, "I am a copy of cat.");

		std::cout << "     Cat: " << cat->getBrain()->getIdeas(0) << std::endl;
		std::cout << "Copy Cat: " << copyCat.getBrain()->getIdeas(0) << std::endl;
		std::cout << std::endl;

		copyCat.getBrain()->setIdeas(0, "Don't bother me.");

		std::cout << "     Cat: " << cat->getBrain()->getIdeas(0) << std::endl;
		std::cout << "Copy Cat: " << copyCat.getBrain()->getIdeas(0) << std::endl;
		std::cout << std::endl;
		delete cat;
	}
	{
		Dog*	dog = new Dog();
		Dog		copyDog(*dog);

		dog->getBrain()->setIdeas(0, "I am a dog.");
		copyDog.getBrain()->setIdeas(0, "I am a copy of dog.");

		std::cout << "     Dog: " << dog->getBrain()->getIdeas(0) << std::endl;
		std::cout << "Copy Dog: " << copyDog.getBrain()->getIdeas(0) << std::endl;
		std::cout << std::endl;

		copyDog.getBrain()->setIdeas(0, "Take me for a walk.");

		std::cout << "     Dog: " << dog->getBrain()->getIdeas(0) << std::endl;
		std::cout << "Copy Dog: " << copyDog.getBrain()->getIdeas(0) << std::endl;
		std::cout << std::endl;
		delete dog;
	}
}

static void	ideas(void){
	std::cout << "===========Ideas===========" << std::endl;
	Cat* cat = new Cat();
	Dog* dog = new Dog();
	std::cout << std::endl;

	for (int i = 0; i < 100; i++){
		dog->getBrain()->setIdeas(i, "I'm a cute dog.");
		cat->getBrain()->setIdeas(i, "I'm a cute cat.");
	}
	for (int i = 0; i < 100; i++)
		std::cout << "Cat: " << (i + 1) << ": " << cat->getBrain()->getIdeas(i) << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << "Dog: " << (i + 1) << ": " << dog->getBrain()->getIdeas(i) << std::endl;

	delete cat;
	delete dog;
}


int main()
{
	subjectMain();
	arrayAnimals();
	copies();
	ideas();
	return (0);
}
