/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:06:50 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/13 21:44:29 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Default constructor Intern called." << std::endl;
	return ;	
}

Intern::Intern(Intern const& copy) 
{
	std::cout << "Copy constructor Intern called." << std::endl;
	(void)copy;
	*this = copy;
}

Intern::~Intern(void)
{
	std::cout << "Destructor Internt called." << std::endl;
	return ;
}

Intern& Intern::operator=(Intern const& src)
{
	std::cout << "Copy assignment operator Intern called." << std::endl;
	(void)src;
	return (*this);
}

AForm* Intern::_Shrubbery(std::string target) 
{
	AForm* form = new ShrubberyCreationForm(target);
	std::cout << "Intern creates " << form->getName() << std::endl;
	return (form);
}

AForm* Intern::_Robotomy(std::string target)
{
	AForm* form = new RobotomyRequestForm(target);
	std::cout << "Intern creates " << form->getName() << std::endl;
	return (form);

}

AForm* Intern::_Presidential(std::string target)
{
	AForm* form = new PresidentialPardonForm(target);
	std::cout << "Intern creates " << form->getName() << std::endl;
	return (form);
}

const char* Intern::UnknownFormException::what() const throw()
{
	return ("Unknown form requested.");
}

AForm* Intern::makeForm(std::string name, std::string target)
{
	int i;
	
	AForm* (Intern::*forms[3])(std::string) = { &Intern::_Shrubbery, &Intern::_Robotomy, &Intern::_Presidential};
	std::string	fr[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	
	i = 0;
	while (i < 3)
	{
		if (!fr[i].compare(name)){
			return ((this->*forms[i])(target));
		}
		i++;
	}
	throw UnknownFormException();
}
