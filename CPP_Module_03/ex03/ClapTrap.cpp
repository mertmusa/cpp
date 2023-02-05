/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 19:53:26 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/05 21:50:14 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//OCF Rules
ClapTrap::ClapTrap()
{
	std::cout << "\033[1;33mPARENT DEFAULT CONSTRUCTOR CALLED\033[0m" << std::endl;
}

ClapTrap::ClapTrap(std::string sName)
{
	this->setName(sName);
	this->setHit(10);
	this->setEnergy(10);
	this->setAttack(0);
	std::cout<<"\033[1;33mPARENT Constructor of "<<this->getName()<<" called!\033[0m"<<std::endl;
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
	std::cout<<"\033[1;33mPARENT Destructor of "<<this->getName()<<" called!\033[0m"<<std::endl;
}

std::string ClapTrap::getName(void) const
{
	return(this->name);
}

void	ClapTrap::setName(std::string sName)
{
	this->name = sName;
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
		std::cout<<"\033[1;33mClapTrap "<<this->getName()<<" attacks "<< target <<", causing "<<this->attackDamage<<" points of damage!\033[0m"<<std::endl;
		this->setEnergy(this->getEnergy() - 1);
	}
	else
		std::cout<<"\033[1;33mClapTrap "<<this->getName()<<" has no energy left! Let him get some rest!\033[0m"<<std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints > 0)
	{
		std::cout<<"\033[1;33mClapTrap "<<this->getName()<<" takes damage, causing "<<amount<<" points of damage!\033[0m" << std::endl;
		this->setHit(this->getHit() - amount);
		if (this->getHit() > 0)
			std::cout<<"\033[1;33mNow has "<<this->getHit()<<" hit point!\033[0m"<<std::endl;
		else
			std::cout<<"\033[1;33mNow has "<< "0" <<" hit point!\033[0m"<<std::endl;
	}
	if (this->hitPoints <= 0)
		std::cout<<"\033[1;31mClapTrap "<<this->getName()<<" is dead!\033[0m"<<std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if(this->getEnergy() >= 1 && this->hitPoints > 0)
	{
		std::cout<<"\033[1;33mClapTrap "<<this->getName()<<" is repaired, causing "<<amount<<" points of heal!\033[0m"<<std::endl;
		this->setHit(this->getHit() + amount);
		this->setEnergy(this->getEnergy() - 1);
		std::cout<<"\033[1;33mNow has "<<this->getHit()<<" hit point!\033[0m"<<std::endl;
	}
	else if (this->hitPoints > 0)
		std::cout<<"\033[1;33mClapTrap "<<this->getName()<<" has no energy left! Let him get some rest!\033[0m"<<std::endl;
}
