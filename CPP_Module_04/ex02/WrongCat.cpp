/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:40:35 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/06 16:43:15 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->setType("WrongCat");
	std::cout << "\033[1;34mWrongCAT DEFAULT CONSTRUCTOR CALLED\033[0m" << std::endl;
}

WrongCat::WrongCat(const WrongCat& acopy) : WrongAnimal()
{
	*this = acopy;
	std::cout << "\033[1;34mWrongCAT COPY CONSTRUCTOR CALLED\033[0m" << std::endl;
}
WrongCat& WrongCat::operator = (const WrongCat& acopy)
{
	setType(acopy.getType());
	std::cout << "\033[1;34mWrongCAT OPERATOR ASSIGNMENT CALLED\033[0m" << std::endl;
	return(*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "\033[1;34mWrongCAT DESTRUCTOR CALLED\033[0m" << std::endl;
}

/*void WrongCat::setType(std::string sType)
{
	this->type = sType;
}

std::string WrongCat::getType(void) const
{
	return(this->type);
}
*/
void WrongCat::makeSound() const
{
	std::cout << "\033[1;34mAnimal " << this->getType() << " makes sound miyav miyav!\033[0m" << std::endl;
}
