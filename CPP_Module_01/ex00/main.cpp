/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 19:23:54 by mtemel            #+#    #+#             */
/*   Updated: 2023/01/27 19:11:04 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie* NewOne = new Zombie;
	NewOne->randomChump("Foo");
	NewOne->randomChump("Bar");
	delete NewOne;
	//system("leaks zombie");
}
