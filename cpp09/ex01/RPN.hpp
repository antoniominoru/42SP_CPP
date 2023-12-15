/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:57:35 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/13 16:02:57 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <string>
#include <stack>

class RPN {
	public:
		RPN(void);
		RPN(std::string input);
		RPN(RPN const& copy);
		~RPN(void);

		RPN& operator=(RPN const & src);

		void	rpn();
	private:
		std::string		_input;
		std::stack<int> _stack;
		void	_validateInput();
		bool	_isTokens(char c);
		void	_calculateRPN(char c);
		void	_getResult();
};

#endif
