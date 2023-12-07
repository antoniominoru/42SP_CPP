/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:15:52 by aminoru-          #+#    #+#             */
/*   Updated: 2023/11/14 16:41:05 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedLosers.hpp"

bool	isFileEmpty(const std::string& fileName) {
    std::ifstream file(fileName);
    return (file.peek() == EOF);
}

int main (int argc, char *argv[])
{
	std::ifstream	ifs;

	if (argc != 4)
	{
		std::cerr << "Invalid number of arguments. Use: ./sed <filename> <s1> <s2>" <<std::endl;
		return (0);	
	}
	ifs.open(std::string(argv[1]).c_str());
	if (ifs.fail())
	{
		std::cerr << "Could not open the file. Check that the file exists and that the name is correct." <<std::endl;
		return (0);	
	}
	if (isFileEmpty(argv[1]))
	{
		std::cerr << "Empty file." <<std::endl;
		return (0);	
	}
	if (std::string(argv[2]).size() == 0 || std::string(argv[3]).size() == 0)
	{
		std::cerr << "Nothing to replace. S1 or s2 is empty." <<std::endl;
		return (0);	
	}
	ifs.close();
	
	SedLosers sedLosers = SedLosers(argv[1], argv[2], argv[3]);
	sedLosers.openFile();
	return (0);
}
