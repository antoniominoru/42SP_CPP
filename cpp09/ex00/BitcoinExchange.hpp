/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:56:47 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/13 15:42:52 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <map>

class BitcoinExchange {
	public:
		BitcoinExchange(void);
		BitcoinExchange(std::string inputFile);
		BitcoinExchange(BitcoinExchange const& copy);
		~BitcoinExchange(void);

		BitcoinExchange& operator=(BitcoinExchange const & src);
		
		void	initData(void);
	private:
		std::string	_inputFile;
		std::string	_dataFile;
		std::map<std::string, float>	_dataBase;

		void	_initDataFile();
		void	_initInputFile();
		void	_calcBitcoin(std::string date, float value);
		float	_calcValue(std::string date, float value);
		int		_validDate(std::string strDate);
		int		_checkYear(int year, int month, int day);
		int		_checkMonth(int month);
		int		_checkDay(int year, int month, int day);
		bool	_isLeap(int year);
};

#endif
