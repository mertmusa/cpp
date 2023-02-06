/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 02:21:22 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/06 03:25:19 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "\033[1;33mANIMAL DEFAULT CONSTRUCTOR CALLED\033[0m" << std::endl;
}

Animal::Animal(const Animal& acopy)
{
	*this = acopy;
	std::cout << "\033[1;33mANIMAL COPY CONSTRUCTOR CALLED\033[0m" << std::endl;
}
Animal& Animal::operator = (const Animal& acopy)
{
	setType(acopy.getType());
	std::cout << "\033[1;33mANIMAL OPERATOR ASSIGNMENT CALLED\033[0m" << std::endl;
	return(*this);
}

Animal::~Animal(void)
{
	std::cout << "\033[1;33mANIMAL DESTRUCTOR CALLED\033[0m" << std::endl;
}

void Animal::setType(std::string sType)
{
	this->type = sType;
}

std::string Animal::getType(void) const
{
	return(this->type);
}

void Animal::makeSound() const
{
	std::cout << "\033[1;33mAnimal " << this->getType() << " makes sound!\033[0m" << std::endl;
}
