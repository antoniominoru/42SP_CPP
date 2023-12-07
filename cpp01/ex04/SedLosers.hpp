/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedLosers.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:16:34 by aminoru-          #+#    #+#             */
/*   Updated: 2023/11/08 12:15:05 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEDLOSERS_HPP
# define SEDLOSERS_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

class SedLosers {
	public:
		SedLosers( std::string fileName, std::string s1, std::string s2 );
		~SedLosers( void );
		int	openFile( void );

	private:
		std::string	_s1;
		std::string	_s2;
		std::string	_fileName;
		std::string	_content;
		std::string	_replace( std::string content);
		void		_write( void );
};

#endif