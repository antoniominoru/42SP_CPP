/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 19:56:29 by aminoru-          #+#    #+#             */
/*   Updated: 2023/12/12 20:04:27 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal {
	public:
		WrongAnimal(void);
		WrongAnimal(std::string const& type);
		WrongAnimal(WrongAnimal const& copy);
		virtual ~WrongAnimal(void);

		WrongAnimal& operator=(WrongAnimal const& src);

		std::string	getType(void) const;
		void		makeSound(void) const;

	protected:
		std::string _type;
};

#endif
