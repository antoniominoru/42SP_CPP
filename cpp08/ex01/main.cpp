/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:54:48 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/15 02:38:07 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	std::cout << "======= Subject main =======" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "======= Add many numbers =======" << std::endl;
	Span sp1 = Span(10500);
	std::vector<int> v1;
	for (size_t i = 0; i < 10500; i++)
		v1.push_back(i);
	sp1.addMoreNumbers(v1.begin(), v1.end());
	std::cout << "ShortestSpan: " << sp1.shortestSpan() << std::endl;
	std::cout << "LongestSpan: " << sp1.longestSpan() << std::endl;

	std::cout << "======= Test exceptions =======" << std::endl;
	try {
		Span sp2 = Span(3);
		sp2.addNumber(2);
		sp2.addNumber(25);
		sp2.addNumber(12);
		sp2.addNumber(35);
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch (const std::exception &e){
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	try {
		Span sp3 = Span(1);
		sp3.addNumber(2);
		std::cout << sp3.shortestSpan() << std::endl;
		std::cout << sp3.longestSpan() << std::endl;
	}
	catch (const std::exception &e){
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	return (0);
}
