/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:55:42 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/13 15:34:58 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
	{
		std::cout << "===== Subject Main =====" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;
		mstack.pop();
	
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	{
		std::cout << "==== test with list ====" << std::endl;
		std::list<int> ls;
		ls.push_back(5);
		ls.push_back(17);
		std::cout << ls.back() << std::endl;
		ls.pop_back();
		std::cout << ls.size() << std::endl;
		ls.push_back(3);
		ls.push_back(5);
		ls.push_back(737);
		ls.push_back(0);
	
		std::list<int>::iterator it = ls.begin();
		std::list<int>::iterator ite = ls.end();
	
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	return 0;
}
