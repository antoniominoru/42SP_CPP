/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 01:13:13 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/13 21:44:18 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	public:
		AForm(void);
		AForm(std::string name, int gradeSign, int gradeEx);
		AForm(AForm const& copy);
		virtual ~AForm(void);
		
		AForm& operator=(AForm const & src);

		std::string getName(void) const;
		bool		getIsSigned(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToEx(void) const;
		
		void			beSigned(const Bureaucrat& br);
		virtual void	execute(Bureaucrat const & executor) const = 0;
		void			checkRequirements(Bureaucrat const & br) const;


		class GradeTooHighException : public std::exception {
			virtual const char* what() const throw();
		};
		
		class GradeTooLowException : public std::exception {
			virtual const char* what() const throw();
		};

		class IsNotSignedException : public std::exception {
			virtual const char* what() const throw();
		};
		
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToEx;	
};

std::ostream& operator<<(std::ostream& os, const AForm& fr);

#endif
