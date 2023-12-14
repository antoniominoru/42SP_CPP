/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 20:04:55 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/10 20:09:59 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public ClapTrap {
	public:
		ScavTrap( void );
		ScavTrap( ScavTrap const& copy );
		ScavTrap( std::string const& name );
		~ScavTrap( void );

		ScavTrap& operator=( ScavTrap const & src );

		void	attack( const std::string& target );
		void	guardGate( void );
};

#endif
