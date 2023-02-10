/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 02:42:05 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/10 18:05:35 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "\033[1;34mCAT DEFAULT CONSTRUCTOR CALLED\033[0m" << std::endl;
	this->setType("Cat");
	this->brain = new Brain();
}

Cat::Cat(const Cat& acopy) : Animal()
{
	*this = acopy;
	std::cout << "\033[1;34mCAT COPY CONSTRUCTOR CALLED\033[0m" << std::endl;
}
Cat& Cat::operator = (const Cat& acopy)
{
	setType(acopy.getType());
	delete this->brain;
	this->brain = new Brain(*acopy.brain);
	std::cout << "\033[1;34mCAT OPERATOR ASSIGNMENT CALLED\033[0m" << std::endl;
	return(*this);
}

Cat::~Cat(void)
{
	delete this->brain;
	std::cout << "\033[1;34mCAT DESTRUCTOR CALLED\033[0m" << std::endl;
}

/*void Cat::setType(std::string sType)
{
	this->type = sType;
}

std::string Cat::getType(void) const
{
	return(this->type);
}
*/
void Cat::makeSound() const
{
	std::cout << "\033[1;34mAnimal " << this->getType() << " makes sound miyav miyav!\033[0m" << std::endl;
}
