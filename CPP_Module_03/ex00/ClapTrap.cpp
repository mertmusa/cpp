/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 19:53:26 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/04 13:25:07 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

std::string ClapTrap::getName(void)
{
	return(this->Name);
}

void	ClapTrap::setName(std::string sName)
{
	this->Name = sName;
}

int	ClapTrap::getHit(void)
{
	return(this->hitPoints);
}

void	ClapTrap::setHit(const int nHit)
{
	this->hitPoints = nHit;
}

int	ClapTrap::getEnergy(void)
{
	return(this->energyPoints);
}

void	ClapTrap::setEnergy(const int rEnergy)
{
	this->energyPoints = rEnergy;
}

int	ClapTrap::getAttack(void)
{
	return(this->attackDamage);
}

void	ClapTrap::setAttack(const int nAttack)
{
	this->attackDamage = nAttack;
}

//OCF Rules
ClapTrap::ClapTrap(std::string sName)
{
	this->setName(sName);
	this->setHit(10);
	this->setEnergy(10);
	this->setAttack(0);
	std::cout<<"Constructor called!"<<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& clapcopy)
{
	*this = clapcopy;
}

ClapTrap& ClapTrap::operator = (const ClapTrap& clapcopy)
{
	setName(clapcopy.getName());
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout<<"Destructor called!"<<std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if(this->getEnergy() >= 1 && this->hitPoints > 0)
	{
		std::cout<<"ClapTrap "<<this->getName()<<" attacks "<<target<<", causing "<<this->attackDamage<<" points of damage!"<<std::endl;
		this->setEnergy(this->getEnergy() - 1);
	}
	else
		std::cout<<"ClapTrap "<<this->getName()<<" has no energy left! Let him get some rest"<<std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints > 0)
	{
		std::cout<<"ClapTrap "<<this->getName()<<" takes damage, causing "<<amount<<" points of damage! Now has "<<this->getHit()<<" hit point!"<<std::endl;
		this->setHit(this->getHit() - amount);
	}
	else
		std::cout<<"ClapTrap "<<this->getName()<<" is dead!"<<std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if(this->getEnergy() >= 1 && this->hitPoints > 0)
	{
		std::cout<<"ClapTrap "<<this->getName()<<" is repaired, causing "<<amount<<" points of heal! Now has "<<this->getHit()<<" hit point!"<<std::endl;
		this->setHit(this->getHit() + amount);
		this->setEnergy(this->getEnergy() - 1);
	}
	else
		std::cout<<"ClapTrap "<<this->getName()<<" has no energy left! Let him get some rest"<<std::endl;
}