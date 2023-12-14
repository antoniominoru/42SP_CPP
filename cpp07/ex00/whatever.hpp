/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:51:42 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/13 15:24:51 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string>

template <typename T>
void	swap(T &a, T &b)
{
	T aux;
	
	aux = a;
	a = b;
	b = aux;
}

template <typename T>
T const &min(T const &a, T const &b)
{
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
T const &max(T const &a, T const &b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif
