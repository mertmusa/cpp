/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:35:07 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/05 18:20:42 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout<<"CHILD SCAV Default Constructor called!"<<std::endl;
}

ScavTrap::ScavTrap(std::string sName) : ClapTrap(sName)
{
	this->setName(sName);
	this->setHit(100);
	this->setEnergy(50);
	this->setAttack(20);
	std::cout<<"CHILD SCAV Constructor of "<<this->getName()<<" called!"<<std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout<<"CHILD SCAV Destructor of "<<this->getName()<<" called!"<<std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& stcopy) : ClapTrap()
{
	*this = stcopy;
}

ScavTrap& ScavTrap::operator = (const ScavTrap& stcopy)
{
	setName(stcopy.getName());
	setHit(stcopy.getHit());
	setEnergy(stcopy.getEnergy());
	setAttack(stcopy.getAttack());
	return (*this);
}

void ScavTrap::guardGate()
{
	std::cout<<"ScavTrap "<<this->getName()<<" is now in Gate keeper mode!"<<std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if(this->getEnergy() >= 1 && this->getHit() > 0)
	{
		std::cout<<"ScavTrap "<<this->getName()<<" attacks "<< target <<", causing "<<this->getAttack()<<" points of damage!"<<std::endl;
		this->setEnergy(this->getEnergy() - 1);
	}
	else
		std::cout<<"ScavTrap "<<this->getName()<<" has no energy left! Let him get some rest"<<std::endl;
}
