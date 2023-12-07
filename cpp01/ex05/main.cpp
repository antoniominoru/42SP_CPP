/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 23:30:31 by aminoru-          #+#    #+#             */
/*   Updated: 2023/11/16 23:44:27 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void )
{
	Harl harl;

	std::cout << ">>>>-DEBUG-<<<<" << std::endl;
	harl.complain("debug");
	std::cout << std::endl;
	std::cout << ">>>>-INFO-<<<<" << std::endl;
	harl.complain("info");
	std::cout << std::endl;
	std::cout << ">>>>-WARNING-<<<<" << std::endl;
	harl.complain("warning");
	std::cout << std::endl;
	std::cout << ">>>>-ERROR-<<<<" << std::endl;
	harl.complain("error");
	std::cout << std::endl;
	harl.complain("invalid");
	return (0);
}