/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:55:33 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/14 15:29:21 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>

class Span {
	public:
		Span(void);
		Span(unsigned int n);
		Span(Span const& copy);
		~Span(void);

		Span& operator=(Span const & src);
		
		unsigned int getNumbers(void) const;
		unsigned int getMaxNum(void) const;
		
		void	addNumber(int num);
		int		shortestSpan();
		int		longestSpan();
		void	addMoreNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		
	private:
		unsigned int		_maxNum;
		std::vector<int>	_numbers;	
};

#endif
