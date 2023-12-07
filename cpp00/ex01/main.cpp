/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 01:28:38 by aminoru-          #+#    #+#             */
/*   Updated: 2023/10/26 11:43:41 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
	PhoneBook	phonebook;
	std::string	input;

	std::cout <<"--> Welcome to the PhoneBook <--"<< std::endl;
	while(1)
	{
		std::cout <<"Please, enter one of the options:"<< std::endl;
		std::cout <<"ADD, SEARCH or EXIT"<< std::endl;
		std::getline(std::cin, input);
		if (input == "ADD")
			phonebook.add();
		else if (input == "SEARCH")
			phonebook.searchContact();
		else if (input == "EXIT" || std::cin.eof())
			exit(0);
		else
			std::cout <<"Invalid command."<< std::endl;
	}
	return (0);
}
