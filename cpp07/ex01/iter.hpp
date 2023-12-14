/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:52:36 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/13 15:24:38 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template <typename T, typename Func>
void iter(T* array, size_t length, Func function)
{
	for (size_t i = 0; i < length; i++){
		function(array[i]);
	}
}

template <typename T>
void printElement(const T& element)
{
	std::cout << "Array element: " << element << std::endl;
}

#endif
