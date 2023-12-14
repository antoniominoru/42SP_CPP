/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 01:13:02 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/13 21:26:45 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("unnamed"), _isSigned(false), _gradeToSign(100), _gradeToEx(100) 
{
	std::cout << "Default constructor Form called." << std::endl;
}

Form::Form(std::string name, int gradeSign, int gradeEx) : _name(name), _isSigned(false), _gradeToSign(gradeSign), _gradeToEx(gradeEx) 
{
	if (_gradeToSign < 1 || _gradeToEx < 1)
		throw GradeTooHighException();
	if (_gradeToSign > 150 || _gradeToEx > 150)
		throw GradeTooLowException();		
	std::cout << "Constructor Form with parameters called." << std::endl;
}

Form::Form(Form const& copy) : _name("unnamed"), _isSigned(false), _gradeToSign(100), _gradeToEx(100) 
{
	std::cout << "Copy constructor Form called." << std::endl;
	if (_gradeToSign < 1 || _gradeToEx < 1)
		throw GradeTooHighException();
	if (_gradeToSign > 150 || _gradeToEx > 150)
		throw GradeTooLowException();
	*this = copy;
}

Form &Form::operator=(const Form &src)
{
	std::cout << "Copy assignment operator Form called." << std::endl;
	if (this != &src){
		const_cast<std::string&>(this->_name) = src.getName();
		this->_isSigned = src.getIsSigned();
		const_cast<int&>(this->_gradeToSign) = src.getGradeToSign();
		const_cast<int&>(this->_gradeToEx) = src.getGradeToEx();
	}
	return (*this);
}

Form::~Form()
{
	std::cout << "Destructor Form called." << std::endl;
}

std::string Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getIsSigned(void) const 
{
	return (this->_isSigned);
}

int	Form::getGradeToSign(void) const 
{
	return (this->_gradeToSign);
}

int	Form::getGradeToEx(void) const 
{
	return (this->_gradeToEx);
}

void	Form::beSigned(const Bureaucrat& br)
{
	try {
		if (br.getGrade() > this->getGradeToSign())
			throw Form::GradeTooLowException();
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		return;
	}
	this->_isSigned = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high.");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low.");
}

std::ostream& operator<<(std::ostream& os, const Form& fr)
{
	os << "Name: " << fr.getName() << " - Form signed: " << std::boolalpha << fr.getIsSigned() << " - Form grade to sign: "
		<< fr.getGradeToSign() << " - Form grade to execute: " << fr.getGradeToEx() << std::endl;
	return (os);
}
