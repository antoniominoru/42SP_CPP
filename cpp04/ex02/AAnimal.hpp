/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 00:10:22 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/12 20:25:50 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>
# include <iostream>

class AAnimal {
	public:
		AAnimal( void );
		AAnimal(AAnimal const& copy);
		virtual ~AAnimal( void );

		AAnimal& operator=(AAnimal const & src);

		std::string		getType(void) const;
		void			setType(std::string type);
		virtual void	makeSound(void) const = 0;
	protected:
		std::string _type;
};

#endif