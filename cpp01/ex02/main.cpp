/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:27:10 by aminoru-          #+#    #+#             */
/*   Updated: 2023/11/06 12:07:43 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string		string;
	std::string*	stringPTR;
	std::string&	stringREF = string;

	string = "HI THIS IS BRAIN";
	stringPTR = &string;

	std::cout << "The memory address of the string variable: " << &string <<std::endl;	
	std::cout << "The memory address held by stringPTR: " << stringPTR <<std::endl;	
	std::cout << "The memory address held by stringREF: " << &stringREF <<std::endl;	

	std::cout << "The value of the string variable: " << string <<std::endl;	
	std::cout << "The value pointed to by stringPTR: " << *stringPTR <<std::endl;	
	std::cout << "The value pointed to by stringREF: " << stringREF <<std::endl;

	return (0);
}
