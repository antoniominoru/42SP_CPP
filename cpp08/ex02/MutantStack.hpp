/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:56:02 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/14 15:35:07 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>


template<typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack<T>(void) {};
		MutantStack<T>(MutantStack const& copy)
		{
			*this = copy;
		}
		~MutantStack<T>(void) {};
		
		MutantStack<T>& operator=(MutantStack<T> const & src)
		{
			*this = src;
			return (*this);
		}
		
		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin() 
		{
			return (this->c.begin());
		}

		iterator end() 
		{
			return (this->c.end());
		}
	
};

#endif
