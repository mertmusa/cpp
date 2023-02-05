/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:34:31 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/05 18:20:31 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"

FragTrap::FragTrap()
{
	std::cout<<"CHILD Frag Default Constructor called!"<<std::endl;
}

FragTrap::FragTrap(std::string sName) : ClapTrap(sName)
{
	this->setName(sName);
	this->setHit(100);
	this->setEnergy(50);
	this->setAttack(20);
	std::cout<<"CHILD Frag Constructor of "<<this->getName()<<" called!"<<std::endl;
}

FragTrap::~FragTrap()
{
	std::cout<<"CHILD Frag Destructor of "<<this->getName()<<" called!"<<std::endl;
}

FragTrap::FragTrap(const FragTrap& ftcopy) : ClapTrap()
{
	*this = ftcopy;
}

FragTrap& FragTrap::operator = (const FragTrap& ftcopy)
{
	setName(ftcopy.getName());
	setHit(ftcopy.getHit());
	setEnergy(ftcopy.getEnergy());
	setAttack(ftcopy.getAttack());
	return (*this);
}
