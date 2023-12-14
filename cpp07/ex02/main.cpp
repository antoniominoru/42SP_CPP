/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:53:14 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/13 15:24:23 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	try {
		std::cout << "Test default constructor" << std::endl;
		Array<int>	arr1;
		std::cout << "arr1<int> size: " << arr1.size() << std::endl;
		std::cout << std::endl;

		std::cout << "Test parameter constructor" << std::endl;
		Array<int>	arr2(8);
		std::cout << "arr2<int> size: " << arr2.size() << std::endl;
		for (unsigned int i = 0; i < arr2.size(); i++)
			std::cout << arr2[i] << " | ";
		std::cout << std::endl;
		std::cout << std::endl;
		
		std::cout << "Test copy constructor: copy of arr2" << std::endl;
		Array<int> arr3(arr2);
		arr3[0] = 10;
		std::cout << "arr3<int> size: " << arr3.size() << std::endl;
		for (unsigned int i = 0; i < arr2.size(); i++)
			std::cout << arr3[i] << " | ";
		std::cout << std::endl;
		std::cout << std::endl;
		
		std::cout << "Test operator '=' " << std::endl;
		Array<char> arrCh(6);
		std::cout << "arrCh<char> size: " << arrCh.size();
		for (unsigned int i = 0; i < arrCh.size(); ++i){
        	arrCh[i] = 'A' + i;
		}
		std::cout << std::endl;
		
		Array<char>	arrCh1 = arrCh;
		std::cout << "arrCh1<char> size: " << arrCh1.size() << std::endl;
		for (unsigned int i = 0; i < arrCh1.size(); ++i){
        	arrCh1[i] = 'A' + i;
		}
		arrCh[0] = 'm';
		arrCh1[4] = 'P';
		std::cout << std::endl;
		
		std::cout << "Array char 'arrCh'" << std::endl;
		for (unsigned int i = 0; i < arrCh.size(); i++)
			std::cout << arrCh[i] << " | ";
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "Array char 'arrCh1' : copy of 'arrCh'" << std::endl;
		for (unsigned int i = 0; i < arrCh1.size(); i++)
			std::cout << arrCh1[i] << " | ";
		std::cout << std::endl;
		std::cout << std::endl;
		
		std::cout << "String array" << std::endl;
		Array<std::string>	str_array(4);
		str_array[0] = "Don't";
		str_array[1] = "give";
		str_array[2] = "up";
		str_array[3] = "!";
		for (unsigned int i = 0; i < str_array.size(); i++)
			std::cout << str_array[i] << " ";
		std::cout << std::endl;
		str_array[0] = "Yes,";
		for (unsigned int i = 0; i < str_array.size(); i++)
			std::cout << str_array[i] << " ";
		std::cout << std::endl;
		std::cout << std::endl;

		std::cout << "Accessing str_array[8]: ";
        std::cout << str_array[8] << std::endl;
	} catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
    return 0;
}
