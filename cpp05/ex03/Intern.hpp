/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:06:53 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/13 21:44:32 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
	public:
		Intern(void);
		Intern(Intern const& copy);
		~Intern(void);

		Intern& operator=(Intern const& src);

		AForm* makeForm(std::string name, std::string target);

		class UnknownFormException : public std::exception {
			virtual const char* what() const throw();
		};
	private:
		AForm* _Shrubbery(std::string target);
		AForm* _Robotomy(std::string target);
		AForm* _Presidential(std::string target);
};

#endif
