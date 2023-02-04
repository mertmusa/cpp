/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 19:53:26 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/04 17:43:36 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//OCF Rules
ClapTrap::ClapTrap()
{
	std::cout << "PARENT CONSTRUCTOR CALLED" << std::endl;
}

ClapTrap::ClapTrap(std::string sName)
{
	this->setName(sName);
	this->setHit(10);
	this->setEnergy(10);
	this->setAttack(0);
	std::cout<<"PARENT Constructor of "<<this->getName()<<" called!"<<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& clapcopy)
{
	*this = clapcopy;
}

ClapTrap& ClapTrap::operator = (const ClapTrap& clapcopy)
{
	setName(clapcopy.getName());
	setHit(clapcopy.getHit());
	setEnergy(clapcopy.getEnergy());
	setAttack(clapcopy.getAttack());
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout<<"PARENT Destructor of "<<this->getName()<<" called!"<<std::endl;
}

std::string ClapTrap::getName(void) const
{
	return(this->Name);
}

void	ClapTrap::setName(std::string sName)
{
	this->Name = sName;
}

int	ClapTrap::getHit(void) const
{
	return(this->hitPoints);
}

void	ClapTrap::setHit(const int nHit)
{
	this->hitPoints = nHit;
}

int	ClapTrap::getEnergy(void) const
{
	return(this->energyPoints);
}

void	ClapTrap::setEnergy(const int rEnergy)
{
	this->energyPoints = rEnergy;
}

int	ClapTrap::getAttack(void) const
{
	return(this->attackDamage);
}

void	ClapTrap::setAttack(const int nAttack)
{
	this->attackDamage = nAttack;
}

void	ClapTrap::attack(const std::string& target)
{
	if(this->getEnergy() >= 1 && this->hitPoints > 0)
	{
		std::cout<<"ClapTrap "<<this->getName()<<" attacks "<< target <<", causing "<<this->attackDamage<<" points of damage!"<<std::endl;
		this->setEnergy(this->getEnergy() - 1);
	}
	else
		std::cout<<"ClapTrap "<<this->getName()<<" has no energy left! Let him get some rest"<<std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints > 0)
	{
		std::cout<<"ClapTrap "<<this->getName()<<" takes damage, causing "<<amount<<" points of damage!" << std::endl;
		this->setHit(this->getHit() - amount);
		if (this->getHit() > 0)
			std::cout<<"Now has "<<this->getHit()<<" hit point!"<<std::endl;
		else
			std::cout<<"Now has "<< "0" <<" hit point!"<<std::endl;
	}
	if (this->hitPoints <= 0)
		std::cout<<"\033[1;31mClapTrap "<<this->getName()<<" is dead!\033[0m"<<std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if(this->getEnergy() >= 1 && this->hitPoints > 0)
	{
		std::cout<<"ClapTrap "<<this->getName()<<" is repaired, causing "<<amount<<" points of heal!"<<std::endl;
		this->setHit(this->getHit() + amount);
		this->setEnergy(this->getEnergy() - 1);
		std::cout<<"Now has "<<this->getHit()<<" hit point!"<<std::endl;
	}
	else if (this->hitPoints > 0)
		std::cout<<"ClapTrap "<<this->getName()<<" has no energy left! Let him get some rest"<<std::endl;
}