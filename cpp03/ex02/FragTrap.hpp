/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 23:45:23 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/10 23:47:36 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap( void );
		FragTrap( FragTrap const& copy );
		FragTrap( std::string const& name );
		~FragTrap( void );

		FragTrap& operator=( FragTrap const & src );

		void	attack( const std::string& target );
		void	highFivesGuys( void );
};

#endif