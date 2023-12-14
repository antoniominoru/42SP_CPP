/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:47:09 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/13 22:03:54 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2){
		std::cout << "Wrong number of arguments. Use: ./converter [value]." << std::endl;
		return (0);
	}
	ScalarConverter::convert(argv[1]);
	return (0);
}
