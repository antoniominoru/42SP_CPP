/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:53:39 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/13 22:09:21 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void)
{
	return ;
}

Serializer::Serializer(Serializer const& copy)
{
	(void) copy;
}

Serializer::~Serializer(void)
{
	return ;
}

Serializer& Serializer::operator=(Serializer const & src)
{
	(void) src;
	return (*this);
}

uintptr_t	Serializer::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}
