/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:53:33 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/13 22:11:22 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void){
	Data		*ptr = new Data;
	Data		*dsr = NULL;
	uintptr_t	sr = 0;
	
	ptr->name = "Minoru";
	ptr->age = 33;
	ptr->height = 1.78;
		
	std::cout << "======Struct Data - before serialization======" << std::endl;
	std::cout << "Pointer: " << sr << std::endl;
	std::cout << "Name: " << ptr->name << std::endl;
	std::cout << "Age: " << ptr->age << std::endl;
	std::cout << "Height: " << ptr->height << std::endl;
	std::cout << "======Serialized Data========" << std::endl;
	sr = Serializer::serialize(ptr);
	std::cout << "Serialized pointer: " << sr << std::endl;
	std::cout << "======Deserialized Data======" << std::endl;
	dsr = Serializer::deserialize(sr);
	std::cout << "Deserialized pointer: " << dsr << std::endl;
	std::cout << "Deserialized name: " << dsr->name << std::endl;
	std::cout << "Deserialized age: " << dsr->age << std::endl;
	std::cout << "Deserialized height: " << dsr->height << std::endl;

	delete ptr;
	return (0);
}
