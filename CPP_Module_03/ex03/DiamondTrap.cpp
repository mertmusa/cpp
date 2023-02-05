/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:41:58 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/05 23:23:03 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout<<"\033[1;36mDiamondTrap Default Constructor Called!\033[0m"<<std::endl;
}

DiamondTrap::DiamondTrap(std::string sName) : ScavTrap(sName), FragTrap(sName)
{
	this->name = ScavTrap::getName();
	this->hitPoint = FragTrap::getHit();
	this->energyPoint = ScavTrap::getEnergy();
	this->attackDamage = FragTrap::getAttack();
	ScavTrap::setName(sName + "_clap_name");
	//ScavTrap::ClapTrap::name = ScavTrap::getName() + "_clap_name";
	//std::cout<<"\033[1;36mDiamondTrap Constructor of "<<this->ScavTrap::getName()<<" called!\033[0m"<<std::endl;
	std::cout<<"\033[1;36mDiamondTrap Constructor of "<<this->name<<" called!\033[0m"<<std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout<<"\033[1;36mwhoAmI? DiamondTrap's name: "<<this->name<<" ClapTrap's name: "<<ScavTrap::getName()<<"!\033[0m"<<std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout<<"\033[1;36mDiamondTrap Destructor of "<<this->getName()<<" called!\033[m"<<std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& dtcopy) : ClapTrap(), ScavTrap(), FragTrap()
{
	*this = dtcopy;
}

DiamondTrap& DiamondTrap::operator = (const DiamondTrap& dtcopy)
{
	setName(dtcopy.getName());
	setHit(dtcopy.getHit());
	setEnergy(dtcopy.getEnergy());
	setAttack(dtcopy.getAttack());
	return (*this);
}
