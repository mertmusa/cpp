/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:34:31 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/05 18:39:52 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout<<"CHILD FRAG Default Constructor called!"<<std::endl;
}

FragTrap::FragTrap(std::string sName) : ClapTrap(sName)
{
	this->setName(sName);
	this->setHit(100);
	this->setEnergy(100);
	this->setAttack(30);
	std::cout<<"CHILD FRAG Constructor of "<<this->getName()<<" called!"<<std::endl;
}

FragTrap::~FragTrap()
{
	std::cout<<"CHILD FRAG Destructor of "<<this->getName()<<" called!"<<std::endl;
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

void FragTrap::highFivesGuys(void)
{
	std::cout<<"Give FragTrap a high fives guys!"<<std::endl;
}
