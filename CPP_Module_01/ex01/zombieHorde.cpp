/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 01:41:30 by mtemel            #+#    #+#             */
/*   Updated: 2023/01/27 18:43:31 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name)
{
	int i = 0;
	Zombie* Ozom = new Zombie[N];
	while (i<N)
	{
		Ozom[i].name = name;
		Ozom[i].announce();
		i++;
	}
	//delete[] Ozom;
	return (Ozom);
}
