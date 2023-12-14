/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 02:01:55 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/13 21:41:12 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm {
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(ShrubberyCreationForm const& copy);
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm& operator=(ShrubberyCreationForm const & src);

		void	execute(const Bureaucrat& executor) const;

		class FileCreateException : public std::exception {
			virtual const char* what() const throw();
		};
		
	private:
		std::string	_target;
};

#endif
