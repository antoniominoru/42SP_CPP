/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:14:51 by aminoru-          #+#    #+#             */
/*   Updated: 2023/11/22 00:49:46 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed{
	private:
		int _value;
		static const int _fractionalBits = 8;
		
	public:
		Fixed( void );
		Fixed( Fixed const & src);
		~Fixed( void );
		Fixed& operator = (Fixed const & rhs);
	
	int getRawBits( void ) const;
	void setRawBits( int const raw); 
};

#endif