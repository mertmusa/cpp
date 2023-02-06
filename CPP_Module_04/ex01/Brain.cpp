/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:20:06 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/06 19:03:15 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "\033[1;36mBrain DEFAULT CONSTRUCTOR CALLED\033[0m" << std::endl;
}

Brain::Brain(const Brain& acopy)
{
	*this = acopy;
	std::cout << "\033[1;36mBrain COPY CONSTRUCTOR CALLED\033[0m" << std::endl;
}
Brain& Brain::operator = (const Brain& acopy)
{
	setIdea(acopy.getIdea());
	std::cout << "\033[1;36mBrain OPERATOR ASSIGNMENT CALLED\033[0m" << std::endl;
	return(*this);
}

Brain::~Brain(void)
{
	std::cout << "\033[1;36mBrain DESTRUCTOR CALLED\033[0m" << std::endl;
}

void Brain::setIdea(std::string sIdea[100])
{
	int i = 0;
	while(i < 100)
	{
		this->idea[i] = sIdea[i];
		i++;
	}
}

std::string* Brain::getIdea(void) const
{
	return((std::string*)this->idea);
}
