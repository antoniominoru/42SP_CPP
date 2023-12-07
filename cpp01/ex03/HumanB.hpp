/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:57:07 by aminoru-          #+#    #+#             */
/*   Updated: 2023/11/07 11:49:24 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {
	
	public:
		HumanB( std::string name);
		~HumanB( void );
		void	attack( void );
		void	setWeapon( Weapon& weapon);

	private:
		Weapon* 	_weapon;
		std::string	_name;
	
};

#endif
