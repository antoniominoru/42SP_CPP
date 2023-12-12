/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 01:17:20 by aminoru-          #+#    #+#             */
/*   Updated: 2023/11/29 14:01:54 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed( int const n)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = n << this->_fractionalBits;	
}

Fixed::Fixed( float const f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = (int) roundf( f * (1 << this->_fractionalBits));
}

Fixed::Fixed( Fixed const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" <<std::endl;
}

int	Fixed::getRawBits( void ) const
{
	return (this->_value);
}

void	Fixed::setRawBits( int const raw)
{
	this->_value = raw;
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->getRawBits() / ((float)(1 << this->_fractionalBits)));
}

int Fixed::toInt(void) const
{
	return(this->_value >> this->_fractionalBits);
}

std::ostream & operator << (std::ostream& o, Fixed const& fixed)
{
	o << fixed.toFloat();
	return(o);
}