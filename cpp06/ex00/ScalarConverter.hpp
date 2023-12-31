/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:47:16 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/13 22:08:59 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <climits>
#include <cfloat>
		
class  ScalarConverter {
	public:
		~ScalarConverter(void);
		ScalarConverter& operator=(ScalarConverter const & src);
		
		static void convert(const std::string& value);
		
		static void			setValue(std::string value);
		static std::string	getValue(void);
	private:
		ScalarConverter(void);
		ScalarConverter(ScalarConverter const& copy);

		static std::string	_value;	
		static char			_char;
		static int			_int;
		static double		_double;
		static float		_float;

		static bool _isChar(const std::string& value);
		static bool _isInt(const std::string& value);
		static bool _isFloat(const std::string& value);
		static bool _isDouble(const std::string& value);

		static void _printChar(long double& value);
		static void _printInt(long double& value);
		static void _printFloat(long double& value);
		static void _printDouble(long double& value);
		static void	_printOnlyChar(std::string const& value);

		static int	_isPseudo(std::string value);
		static void	_print(void);
		static void	_printPseudo(std::string value);
		static void	_impossible(void);
		enum e_ps
		{
			_PSEUDO_DOUBLE,
			_PSEUDO_FLOAT,
		};
};

#endif