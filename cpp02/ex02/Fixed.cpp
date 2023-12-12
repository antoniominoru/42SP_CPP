/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 21:08:40 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/06 13:56:56 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_value = 0;
}

Fixed::Fixed( int const n )
{
	this->_value = n << this->_fractionalBits;
}

Fixed::Fixed( float const f )
{
	this->_value = (int) roundf( f * ( 1 << this->_fractionalBits));
}

Fixed::Fixed( Fixed const & srd )
{
	*this = srd;
}

Fixed::~Fixed()
{
	return;
}

int Fixed::getRawBits( void ) const
{
	return (this->_value);
}

void Fixed::setRawBits( int const raw )
{
	this->_value = raw;
}

float Fixed::toFloat( void ) const
{
	return ((float) this->getRawBits() / ((float)(1 << this->_fractionalBits)));	
}

int Fixed::toInt( void ) const
{
	return (this->_value >> this->_fractionalBits);
}

Fixed& Fixed::operator=( Fixed const & rhs )
{
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Fixed const & fixed)
{
	o << fixed.toFloat();
	return (o);
}

bool Fixed::operator > ( Fixed const & fixed ) const
{
	return (this->_value > fixed.getRawBits());
}

bool Fixed::operator < ( Fixed const & fixed ) const
{
	return (this->_value < fixed.getRawBits());
}

bool Fixed::operator >= ( Fixed const & fixed ) const
{
	return (this->_value >= fixed.getRawBits());
}

bool Fixed::operator <= ( Fixed const & fixed ) const
{
	return (this->_value <= fixed.getRawBits());
}

bool Fixed::operator == ( Fixed const & fixed ) const
{
	return (this->_value == fixed.getRawBits());
}

bool Fixed::operator != ( Fixed const & fixed ) const
{
	return (this->_value != fixed.getRawBits());
}

Fixed Fixed::operator + ( Fixed const & fixed ) const
{
	return (Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed Fixed::operator - ( Fixed const & fixed ) const
{
	return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed Fixed::operator * ( Fixed const & fixed ) const
{
	return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed Fixed::operator / ( Fixed const & fixed ) const
{
	return (Fixed(this->toFloat() / fixed.toFloat()));
}


Fixed& Fixed::operator++( void )
{
	this->_value += 1;
	return (*this);
}

Fixed& Fixed::operator--( void )
{
	this->_value -= 1;
	return (*this);
}

Fixed Fixed::operator++( int )
{
	Fixed aux(*this);
	this->_value++;
	return (aux);
}

Fixed Fixed::operator--( int )
{
	Fixed aux(*this);
	this->_value--;
	return (aux);
}

Fixed& Fixed::min( Fixed& a, Fixed& b )
{
	return (a <= b ? a : b);
}

Fixed const& Fixed::min( Fixed const& a, Fixed const & b )
{
	return (a <= b ? a : b);
}

Fixed& Fixed::max( Fixed& a, Fixed& b )
{
	return (a >= b ? a : b);
}

Fixed const& Fixed::max( Fixed const& a, Fixed const & b )
{
	return (a >= b ? a : b);
}
