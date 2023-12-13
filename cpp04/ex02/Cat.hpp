/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 19:48:33 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/12 20:28:07 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
	public:
		Cat(void);
		~Cat(void);
		Cat(Cat const& copy);
		Cat& operator=(Cat const& src);

		void	makeSound(void) const;
		Brain*	getBrain(void) const;
	private:
		Brain* _brain;
};

#endif
