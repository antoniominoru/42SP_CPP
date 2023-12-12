/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 01:09:50 by aminoru-          #+#    #+#             */
/*   Updated: 2023/11/29 14:24:08 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
	private:
		int _value;
		static const int _fractionalBits = 8;

	public:
		Fixed( void );
		Fixed( int const n );
		Fixed( float const f );
		Fixed( Fixed const & src );
		~Fixed( void );

		Fixed& operator=(Fixed const & rhs);

		int getRawBits( void ) const;
		void setRawBits( int const raw );

		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & fixed);

#endif