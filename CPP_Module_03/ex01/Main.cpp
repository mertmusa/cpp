/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 19:51:44 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/04 17:08:01 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("AALLLLLLLLLYYYYY");

	a.attack("ENNNNNEEEEEMMMMYYYYY");
	a.takeDamage(200);
	a.beRepaired(3);

	return (0);
}