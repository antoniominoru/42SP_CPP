/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 20:06:25 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/12 20:11:40 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain {
	public:
		Brain( void );
		Brain(Brain const& copy);
		~Brain( void );

		Brain& operator=(Brain const & src);
		std::string	getIdeas(int i) const;
		void		setIdeas(int i, std::string idea);

	private:
		std::string	_ideas[100];
};

#endif
