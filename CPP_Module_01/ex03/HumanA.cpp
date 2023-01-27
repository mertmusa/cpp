/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 01:09:47 by mtemel            #+#    #+#             */
/*   Updated: 2023/01/27 18:19:00 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

//HumanA::HumanA(){};

HumanA::HumanA(std::string name, Weapon& WeaponP)
{
	this->name = name;
	this->WeaponA = &WeaponP;
}

void	HumanA::attack()
{
	//std::cout<<name<<" attacks with their "<<WeaponA.getType()<<std::endl;
	std::cout<<this->name<<" attacks with their "<<this->WeaponA->getType() << std::endl;
}
