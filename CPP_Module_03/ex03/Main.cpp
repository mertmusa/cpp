/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 19:51:44 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/06 00:55:47 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap a("AALLLLLLLLLYYYYY");
	//DiamondTrap b(a);

	a.attack("ENNNNNEEEEEMMMMYYYYY");
	a.whoAmI();
	//std::cout<<"a finished -> b starts!"<<std::endl;
	//b.attack("ENNNNNEEEEEMMMMYYYYY");
	//b.whoAmI();

	return (0);
}
