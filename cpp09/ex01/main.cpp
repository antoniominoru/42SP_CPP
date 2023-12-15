/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:57:19 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/13 15:43:23 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2){
		std::cout << "Wrong number of arguments. Usage: ./RPN <expression>." << std::endl;
		return (1);
	}
	try {
		RPN rpn(argv[1]);
		rpn.rpn();
		
	}
	catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
