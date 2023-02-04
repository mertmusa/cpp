/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 19:51:44 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/04 15:33:42 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("AALLLLLLLLLYYYYY");

	a.attack("ENNNNNEEEEEMMMMYYYYY");
	a.takeDamage(200);
	a.beRepaired(3);

	return (0);
}