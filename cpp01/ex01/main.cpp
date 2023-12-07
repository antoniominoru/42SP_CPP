/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:38:26 by aminoru-          #+#    #+#             */
/*   Updated: 2023/11/02 12:04:32 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	Zombie*	zombie;
	int		num;

	num = 5;
	zombie = zombieHorde( num, "Zoo" );
	for ( int i = 0 ; i <  num ; i++ )
	{
		zombie[ i ].announce();
	}
	delete[] zombie;
	return ( 0 );
}
