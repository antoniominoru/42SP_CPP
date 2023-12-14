/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 02:02:12 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/13 21:45:55 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation Form", 145, 137), _target("Home") 
{
	std::cout << "Default constructor ShrubberyCreationForm called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& copy) : AForm() 
{
	std::cout << "Copy constructor ShrubberyCreationForm called." << std::endl;
	*this = copy;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery Creation Form", 145, 137), _target(target) 
{
	std::cout << "Constructor ShrubberyCreationForm with parameters called." << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	std::cout << "Copy assignment operator ShrubberyCreationForm called." << std::endl;
	if (this != &src){
		this->_target = src._target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor ShrubberyCreationForm called." << std::endl;
}

const char* ShrubberyCreationForm::FileCreateException::what() const throw()
{
	return ("Failed to create output file.");
}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	std::ofstream	ofs;
	std::string		file;

	this->checkRequirements(executor);
	
	file = this->_target + "_shrubbery";
	ofs.open(file.c_str());
	if (ofs.fail()){
		throw ShrubberyCreationForm::FileCreateException();
	}
	ofs <<		"		               ,@@@@@@@,\n";
	ofs <<		"       ,,,.   ,@@@@@@/@@,  .oo8888o.\n";
	ofs <<		"    ,&/%/%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n";
	ofs <<		"   ,%&/%&&%&&%,@@@/@@@/@@@88\\88888/88'\n";
	ofs <<		"   %&&%&%&/%&&%@@/@@/ /@@@88888\\88888'\n";
	ofs <<		"   %&&%/ %&/%/%&&@@/ V /@@' `88\\8 `/88'\n";
	ofs <<		"   `&%\\ ` /%&'    |.|        \\ '|8'\n";
	ofs <<		"       |o|        | |         | |\n";
	ofs <<		"       |.|        | |         | |\n";
	ofs <<		"    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n";
	std::cout << "File " << file << " created." << std::endl;
	ofs.close();
}
