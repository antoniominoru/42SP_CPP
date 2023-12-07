/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 23:10:39 by aminoru-          #+#    #+#             */
/*   Updated: 2023/11/16 23:35:03 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl {
	public:
		Harl( void );
		~Harl( void );
		void complain( std::string level );

	private:
		void _debug( void );
		void _info( void );
		void _warning( void );
		void _error( void );
};

#endif
