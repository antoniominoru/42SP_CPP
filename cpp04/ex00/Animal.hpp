/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 00:10:22 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/12 20:03:33 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal {
	public:
		Animal( void );
		Animal( Animal const& copy );
		virtual ~Animal( void );

		Animal& operator=( Animal const & src );
		
		std::string		getType( void ) const;
		void			setType( std::string type);
		virtual void	makeSound( void ) const;
	protected:
		std::string _type;
};

#endif