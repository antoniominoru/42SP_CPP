/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:54:05 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/13 14:54:35 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main(void)
{
	std::vector<int> v1;
	std::vector<int>::iterator it;
	
	for (int i = 0; i < 100; i++){
		v1.push_back(i);
	}

	try {
		it = easyfind(v1, 76);
		std::cout << "Number: " << *it << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	try {
		it = easyfind(v1, 110);
		std::cout << "Number: " << *it << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}
