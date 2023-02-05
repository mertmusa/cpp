/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:34:31 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/05 20:44:57 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout<<"\033[1;35mCHILD FRAG Default Constructor called!\033[0m"<<std::endl;
}

FragTrap::FragTrap(std::string sName) : ClapTrap(sName)
{
	this->setName(sName);
	this->setHit(100);
	this->setEnergy(100);
	this->setAttack(30);
	std::cout<<"\033[1;35mCHILD FRAG Constructor of "<<this->getName()<<" called!\033[0m"<<std::endl;
}

FragTrap::~FragTrap()
{
	std::cout<<"\033[1;35mCHILD FRAG Destructor of "<<this->getName()<<" called!\033[m"<<std::endl;
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
	std::cout<<"\033[1;35mGive FragTrap a high fives guys!\033[0m"<<std::endl;
}
