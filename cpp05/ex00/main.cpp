/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 20:35:44 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/13 21:23:21 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try{
		std::cout << "Valid grades." << std::endl;
		Bureaucrat b;
		Bureaucrat b1("Leo", 55);
		Bureaucrat b2 = Bureaucrat("Katy", 20);
		Bureaucrat b3 = Bureaucrat("Tommy", 120);
		std::cout << std::endl;
		std::cout << b << std::endl;
		std::cout << b1 << std::endl;
		std::cout << b2 << std::endl;
		std::cout << b3 << std::endl;	
	}
	catch (std::exception & e){
		std::cout << "Exception: " << e.what() << std::endl;
	}
	
	try {
		std::cout << std::endl;
		std::cout << "Less than minimum grade." << std::endl;
		Bureaucrat b4 = Bureaucrat("Ted", 160);
		std::cout << b4 << std::endl;
	}
	catch (std::exception & e){
		std::cout << "Exception: " << e.what() << std::endl;
	}
	
	try {
		std::cout << std::endl;
		std::cout << "Higher than maximun grade" << std::endl;
		Bureaucrat b5 = Bureaucrat("Amy", -50);
		std::cout << b5 << std::endl;
	}
	catch (std::exception & e){
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		std::cout << std::endl;
		std::cout << "Decrement and Increment" << std::endl;
		Bureaucrat b5 = Bureaucrat("Toby", 3);
		std::cout << b5 << std::endl;
		b5.increment();
		std::cout << "Increment 3: " << b5 << std::endl;
		b5.decrement();
		std::cout << "Decrement 3: " << b5 << std::endl;
	}
	catch (std::exception & e){
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		std::cout << std::endl;
		std::cout << "Copy" << std::endl;
		Bureaucrat b6("Lily", 67);
		Bureaucrat copy = b6;
		std::cout << b6 << std::endl;
		std::cout << "Copy: " << copy << std::endl;
		
		b6.increment();
		b6.increment();
		copy.decrement();
		copy.decrement();
		std::cout << b6 << std::endl;
		std::cout << "Copy: " << copy << std::endl;
	}
	catch (std::exception & e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	
	try {
		std::cout << std::endl;
		std::cout << "Decrement low grade" << std::endl;
		Bureaucrat b = Bureaucrat("b1", 150);
		b.decrement();
	}
	catch (std::exception & e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		std::cout << std::endl;
		std::cout << "Increment high grade" << std::endl;
		Bureaucrat b = Bureaucrat("b2", 1);
		b.increment();
	}
	catch (std::exception & e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	return (0);
}