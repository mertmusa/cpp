/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:34:33 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/06 16:37:19 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "\033[1;33mWrongANIMAL DEFAULT CONSTRUCTOR CALLED\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& acopy)
{
	*this = acopy;
	std::cout << "\033[1;33mWrongANIMAL COPY CONSTRUCTOR CALLED\033[0m" << std::endl;
}
WrongAnimal& WrongAnimal::operator = (const WrongAnimal& acopy)
{
	setType(acopy.getType());
	std::cout << "\033[1;33mWrongANIMAL OPERATOR ASSIGNMENT CALLED\033[0m" << std::endl;
	return(*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "\033[1;33mWrongANIMAL DESTRUCTOR CALLED\033[0m" << std::endl;
}

void WrongAnimal::setType(std::string sType)
{
	this->type = sType;
}

std::string WrongAnimal::getType(void) const
{
	return(this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "\033[1;33mWrongAnimal " << this->getType() << " makes sound!\033[0m" << std::endl;
}
