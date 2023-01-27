/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 01:39:55 by mtemel            #+#    #+#             */
/*   Updated: 2023/01/27 19:08:01 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <unistd.h>

int main()
{
	Zombie* NewOne = new Zombie;
	NewOne->zombieHorde(4, "Canavar");
	delete NewOne;
	//system("leaks zombiehorde");
}
