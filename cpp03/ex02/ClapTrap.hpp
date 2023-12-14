/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 01:13:21 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/09 23:22:14 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	private:
		std::string _name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
		
	public:
		ClapTrap( void );
		ClapTrap( ClapTrap const& copy );
		ClapTrap( std::string const& name );
		~ClapTrap( void );
		
		ClapTrap& operator=(ClapTrap const & src);
		
		std::string getName( void ) const;
		int	getHitPoints( void ) const;
		int	getEnergyPoints( void ) const;
		int getAttackDamage( void ) const;
		
		void setName( std::string const &name);
		void setHitPoints( int hitPoints );
		void setEnergyPoints( int energy );
		void setAttackDamage( int attack );
		
		void attack( const std::string& target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );
};

#endif