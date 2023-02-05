/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:35:07 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/06 01:31:48 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout<<"\033[1;34mCHILD SCAV Default Constructor called!\033[0m"<<std::endl;
}

ScavTrap::ScavTrap(std::string sName) : ClapTrap(sName)
{
	this->setName(sName);
	this->setHit(100);
	this->setEnergy(50);
	this->setAttack(20);
	std::cout<<"\033[1;34mCHILD SCAV Constructor of "<<this->getName()<<" called!\033[0m"<<std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout<<"\033[1;34mCHILD SCAV Destructor of "<<this->getName()<<" called!\033[0m"<<std::endl;
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
	std::cout<<"\033[1;34mScavTrap "<<this->getName()<<" is now in Gate keeper mode!\033[0m"<<std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if(this->getEnergy() >= 1 && this->getHit() > 0)
	{
		std::cout<<"\033[1;34mScavTrap "<<name<<" attacks "<< target <<", causing "<<this->getAttack()<<" points of damage!\033[0m"<<std::endl;
		this->setEnergy(this->getEnergy() - 1);
	}
	else
		std::cout<<"\033[1;34mScavTrap "<<this->getName()<<" has no energy left! Let him get some rest!\033[0m"<<std::endl;
}
