/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:52:45 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/13 15:23:31 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void){
	int		intArray[] = {1, 2, 3, 4, 5, 6, 7};
	float	floatArray[] = {1.1, 2.5, 3.6};
	std::string	sports[] = {"soccer", "basketball", "volleyball", "baseball", "swimming"};
	 
	std::cout << std::endl;
	iter(intArray, 7, printElement<int>);
	std::cout << std::endl;

	std::cout << std::endl;
	iter(floatArray, 3, printElement<float>);
	std::cout << std::endl;
	
	std::cout << std::endl;
	iter(sports, 5, printElement<std::string>);
	std::cout << std::endl;
	
	return (0);
}
