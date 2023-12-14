/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 02:01:19 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/13 21:40:30 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon Form", 25, 5), _target("Nome") 
{
	std::cout << "Default constructor Presidential Pardon called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& copy) : AForm() 
{
	std::cout << "Copy constructor Presidential Pardon called." << std::endl;
	*this = copy;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : 
	AForm("Presidential Pardon Form", 25, 5), _target(target) {
	std::cout << "Constructor Presidential Pardon with parameters called." << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	std::cout << "Copy assignment operator Presidential Pardon called." << std::endl;
	if (this != &src){
		this->_target = src._target;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor Presidential Pardon called." << std::endl;
}

void	PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	this->checkRequirements(executor);
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox!" << std::endl;
}
