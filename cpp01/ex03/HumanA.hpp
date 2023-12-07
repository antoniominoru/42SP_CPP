/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:57:07 by aminoru-          #+#    #+#             */
/*   Updated: 2023/11/07 11:49:31 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA {
	
	public:
		HumanA( std::string name, Weapon& weapon);
		~HumanA( void );
		void	attack( void );

	private:
		Weapon& 	_weapon;
		std::string	_name;
	
};

#endif
