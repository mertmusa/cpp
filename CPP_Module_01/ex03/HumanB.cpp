/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:49:55 by mtemel            #+#    #+#             */
/*   Updated: 2023/01/26 18:58:49 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::setWeapon(Weapon& WeaponP)
{
	this->name = name;
	WeaponB = WeaponP;
}

void	HumanB::attack()
{
	std::cout<<name<<" attacks with their "<<WeaponB.getType()<<std::endl;
}
