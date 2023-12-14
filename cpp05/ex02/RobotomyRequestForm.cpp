/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 02:01:00 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/13 21:40:45 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request Form", 72, 45), _target("None") 
{
	std::cout << "Default constructor Robotomy Request called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& copy) : AForm() 
{
	std::cout << "Copy constructor Robotomy Request called." << std::endl;
	*this = copy;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Request Form", 72, 45), _target(target) 
{
	std::cout << "Constructor Robotomy Request with parameters called." << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	std::cout << "Copy assignment operator PRobotomy Request called." << std::endl;
	if (this != &src){
		this->_target = src._target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor Robotomy Request called." << std::endl;
}

void	RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	this->checkRequirements(executor);
	
	std::cout << "Drilling noises..." << std::endl;
	int	success = rand() % 2;
	if (success == 0)
		std::cout << this->_target << " has been successfully robotomized" << std::endl;
	else
		std::cout << this->_target << " fail to be robotized." << std::endl;
}