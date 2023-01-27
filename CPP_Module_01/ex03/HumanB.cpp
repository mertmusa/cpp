/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:49:55 by mtemel            #+#    #+#             */
/*   Updated: 2023/01/27 18:27:17 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void	HumanB::setWeapon(Weapon& WeaponP)
{
	this->WeaponB = &WeaponP;
}

void	HumanB::attack()
{
	std::cout<<this->name<<" attacks with their "<<this->WeaponB->getType()<<std::endl;
}
