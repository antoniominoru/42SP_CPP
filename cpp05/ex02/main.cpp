/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 20:35:44 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/13 21:38:51 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void)
{
	try{
		std::cout << "_____Shrubbery Creation Form_____" << std::endl;
		std::cout << std::endl;
		Bureaucrat b1("B1", 125);
		Bureaucrat br("Br", 150);
		ShrubberyCreationForm s1("S1");
		ShrubberyCreationForm s2("S2");
		std::cout << std::endl;
		s1.beSigned(b1);
		b1.executeForm(s1);
		br.executeForm(s2);
		std::cout << std::endl;
	} catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
	
	try {
		std::cout << "_____Presidential Pardon Form_____" << std::endl;
		std::cout << std::endl;
		Bureaucrat b2("B2", 5);
		Bureaucrat b3("B3", 35);
		PresidentialPardonForm p1("p1");
		PresidentialPardonForm p2("p2");
		std::cout << std::endl;
		p1.beSigned(b2);
		b2.executeForm(p1);
		p2.beSigned(b3);
		b3.executeForm(p2);
		std::cout << std::endl;
	} catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
	
	try {
		std::cout << "_____Robotomy Request Form_____" << std::endl;
		std::cout << std::endl;
		Bureaucrat b4("B4", 5);
		Bureaucrat b5("B5", 45);
		RobotomyRequestForm r1("R1");
		RobotomyRequestForm r2("R2");
		std::cout << std::endl;
		r1.beSigned(b4);
		b4.executeForm(r1);
		r2.beSigned(b5);
		b5.executeForm(r2);
		b4.executeForm(r2);
		std::cout << std::endl;
	} catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
	return (0);
}
