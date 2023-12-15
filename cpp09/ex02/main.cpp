/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:57:46 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/13 16:03:03 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int argc, char *argv[])
{
	if (argc < 2){
		std::cerr << "Wrong number of arguments." << std::endl;
		return (1);
	}
	try {
		PmergeMe pm;
		pm.pMerge(argc, argv);
	}
	catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
}
