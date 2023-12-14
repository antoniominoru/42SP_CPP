/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:53:46 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/13 15:33:47 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

class NotFoundException : public std::exception {
	virtual const char* what() const throw()
	{
		return ("Value not found in container.");
	};
};

template<typename T>
typename T::iterator	easyfind(T &cont, int n)
{
	typename T::iterator	it;

	it = std::find(cont.begin(), cont.end(), n);
	if (it == cont.end()) {
        throw ::NotFoundException();
    }
    return it;
}

#endif
