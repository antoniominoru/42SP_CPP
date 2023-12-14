/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 20:36:13 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/13 21:19:57 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Ted"), _grade(1) 
{
	std::cout << "Default constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const& copy)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = copy;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) 
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		this->_grade = grade;
	std::cout << "Constructor with parameters called." << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	std::cout << "Copy assignment operator called." << std::endl;
	if (this != &src){
		this->_name = src.getName();
		this->_grade = src.getGrade();	
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called." << std::endl;
}

std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const 
{
	return (this->_grade);
}

void	Bureaucrat::increment(void)
{
	if (this->_grade > 1)
		this->_grade--;
	else
		throw GradeTooHighException();
}

void Bureaucrat::decrement(void)
{
	if (this->_grade < 150)
		this->_grade++;
	else
		throw GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat too high, maximum grade is 1");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat too low, minimum grade is 150");
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& br)
{
	os << br.getName() << ", bureaucrat grade: " << br.getGrade();
	return (os);
}