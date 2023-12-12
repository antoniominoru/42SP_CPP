/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 21:09:22 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/04 21:59:30 by aminoru-         ###   ########.fr       */
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
		Fixed( Fixed const & srd );
		~Fixed( void );
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );

		float toFloat( void ) const;
		int toInt( void ) const;

		Fixed& operator=( Fixed const & rhs );

		bool operator > ( Fixed const & fixed ) const;
		bool operator < ( Fixed const & fixed ) const;
		bool operator >= ( Fixed const & fixed ) const;
		bool operator <= ( Fixed const & fixed ) const;
		bool operator == ( Fixed const & fixed ) const;
		bool operator != ( Fixed const & fixed ) const;
		
		Fixed operator + ( Fixed const & fixed ) const;
		Fixed operator - ( Fixed const & fixed ) const;
		Fixed operator * ( Fixed const & fixed ) const;
		Fixed operator / ( Fixed const & fixed ) const;

		Fixed& operator++( void );
		Fixed& operator--( void );
		
		Fixed operator++( int );
		Fixed operator--( int );

		static Fixed& min( Fixed& a, Fixed& b );
		static Fixed const & min( Fixed const& a, Fixed const & b );
		static Fixed& max( Fixed& a, Fixed& b );
		static Fixed const & max( Fixed const& a, Fixed const & b );
		 
};

std::ostream & operator<<(std::ostream & o, Fixed const & fixed);

#endif