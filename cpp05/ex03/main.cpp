/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 20:35:44 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/13 21:45:10 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"

int	main(void)
{
	Intern	someRandomIntern;
	{
		AForm*	rrf;
		Bureaucrat br("Br", 45);
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << std::endl;
		rrf->beSigned(br);
		br.executeForm(*rrf);
		delete rrf;
	}
	std::cout << std::endl;
	{
		AForm*	ppf;
		Bureaucrat b1("B1", 5);
		ppf = someRandomIntern.makeForm("presidential pardon", "PP1");
		std::cout << std::endl;
		ppf->beSigned(b1);
		b1.executeForm(*ppf);
		delete ppf;
	}
	std::cout << std::endl;
	{
		AForm*	scf;
		Bureaucrat b2("B2", 137);
		scf = someRandomIntern.makeForm("shrubbery creation", "Home");
		std::cout << std::endl;
		scf->beSigned(b2);
		b2.executeForm(*scf);
		delete scf;	
	}
	std::cout << std::endl;
	try {
		AForm*	scf;
		scf = someRandomIntern.makeForm("creation", "Home");
		delete scf;
	}
	catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
		try {
		AForm*	ppf;
		ppf = someRandomIntern.makeForm("president pardon", "");
		delete ppf;
	}
	catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
