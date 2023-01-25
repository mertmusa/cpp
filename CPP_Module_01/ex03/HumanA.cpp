/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 01:09:47 by mtemel            #+#    #+#             */
/*   Updated: 2023/01/26 01:10:44 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& WeaponP)
{
	this->name = name;
	WeaponA = WeaponP;
}

void	HumanA::attack()
{
	std::cout<<name<<" attacks with their "<<WeaponA.getType()<<std::endl;
}
