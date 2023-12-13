/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 19:50:48 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/12 20:28:11 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
	public:
		Dog(void);
		~Dog(void);
		Dog(Dog const& copy);
		Dog& operator=(Dog const& src);

		void	makeSound(void) const;
		Brain*	getBrain(void) const;
	private:
		Brain*	_brain;
};

#endif
