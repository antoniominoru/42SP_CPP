/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 01:13:02 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/13 21:44:15 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("unnamed"), _isSigned(false), _gradeToSign(100), _gradeToEx(100) 
{
	std::cout << "Default constructor AForm called." << std::endl;
}

AForm::AForm(std::string name, int gradeSign, int gradeEx) : _name(name), _isSigned(false), _gradeToSign(gradeSign), _gradeToEx(gradeEx) 
{
	if (_gradeToSign < 1 || _gradeToEx < 1)
		throw GradeTooHighException();
	if (_gradeToSign > 150 || _gradeToEx > 150)
		throw GradeTooLowException();		
	std::cout << "Constructor AForm with parameters called." << std::endl;
}

AForm::AForm(AForm const& copy) : _name("unnamed"), _isSigned(false), _gradeToSign(100), _gradeToEx(100) 
{
	std::cout << "Copy constructor AForm called." << std::endl;
	if (_gradeToSign < 1 || _gradeToEx < 1)
		throw GradeTooHighException();
	if (_gradeToSign > 150 || _gradeToEx > 150)
		throw GradeTooLowException();
	*this = copy;
}

AForm &AForm::operator=(const AForm &src)
{
	std::cout << "Copy assignment operator AForm called." << std::endl;
	if (this != &src){
		const_cast<std::string&>(this->_name) = src.getName();
		this->_isSigned = src.getIsSigned();
		const_cast<int&>(this->_gradeToSign) = src.getGradeToSign();
		const_cast<int&>(this->_gradeToEx) = src.getGradeToEx();
	}
	return (*this);
}

AForm::~AForm()
{
	std::cout << "Destructor AForm called." << std::endl;
}

std::string AForm::getName(void) const
{
	return (this->_name);
}

bool	AForm::getIsSigned(void) const 
{
	return (this->_isSigned);
}

int	AForm::getGradeToSign(void) const 
{
	return (this->_gradeToSign);
}

int	AForm::getGradeToEx(void) const 
{
	return (this->_gradeToEx);
}

void	AForm::beSigned(const Bureaucrat& br)
{
	try {
		if (br.getGrade() > this->getGradeToSign())
			throw AForm::GradeTooLowException();
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		return;
	}
	this->_isSigned = true;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high.");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low.");
}

const char* AForm::IsNotSignedException::what() const throw()
{
	return ("The form is not signed.");
}

void	AForm::checkRequirements(Bureaucrat const & br) const 
{
	if (getIsSigned() == false)
		throw AForm::IsNotSignedException();
	if (br.getGrade() > this->getGradeToEx())
		throw Bureaucrat::GradeTooLowException();
	std::cout << br.getName() << " was executed." << std::endl;
}

std::ostream& operator<<(std::ostream& os, const AForm& fr)
{
	os << "Name: " << fr.getName() << " - AForm signed: " 
		<< std::boolalpha << fr.getIsSigned() << " - AForm grade to sign: "
		<< fr.getGradeToSign() << " - AForm grade to execute: "
		<< fr.getGradeToEx() << std::endl;
	return (os);
}
