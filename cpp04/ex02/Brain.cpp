/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 20:06:29 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/12 20:20:09 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) 
{
	std::cout << "Default constructor Brain called." << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "what's your idea?";
	return;
}

Brain::Brain(Brain const& copy) 
{
	std::cout << "Copy constructor Brain called." << std::endl;
	*this = copy;
}

Brain::~Brain(void)
{
	std::cout << "Destructor Brain called." << std::endl;
	return;
}

Brain& Brain::operator=(Brain const & src)
{
	if (this != &src){
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = src._ideas[i];
	}
	std::cout << "Copy assignment Brain operator called." << std::endl;
	return (*this);
}

std::string	Brain::getIdeas(int i) const 
{
	if (i >= 0 && i < 100)
		return(_ideas[i]);
	return (NULL);
}

void	Brain::setIdeas(int i, std::string idea) 
{
	if (i >= 0 && i < 100) {
        _ideas[i] = idea;
    }
}