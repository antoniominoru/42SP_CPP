/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 20:36:11 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/13 21:25:56 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat {
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const& copy);
		~Bureaucrat(void);

		Bureaucrat& operator=(Bureaucrat const & src);

		std::string	getName(void) const;
		int			getGrade(void) const;
		
		void 		increment(void);
		void 		decrement(void);
		void		signForm(Form &form);

		class GradeTooHighException : public std::exception {
			virtual const char* what() const throw();
		};
		
		class GradeTooLowException : public std::exception {
			virtual const char* what() const throw();
		};

	private:
		std::string	_name;
		int			_grade;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& br);

#endif