/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:40:54 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/16 12:42:38 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "\033[1;30mIntern CONSTRUCTOR CALLED\033[0m" << std::endl;
}

Intern::Intern(const Intern &icopy)
{
	std::cout << "\033[1;30mIntern COPY CONSTRUCTOR CALLED\033[0m" << std::endl;
	*this = icopy;
}

Intern Intern::operator = (Intern const&)
{
	std::cout << "\033[1;30mIntern OPERATOR ASSIGNMENT CALLED\033[0m" << std::endl;
	return(*this);
}

Intern::~Intern()
{
	std::cout << "\033[1;30mIntern DESTRUCTOR CALLED\033[0m" << std::endl;
}

AForm* Intern::makeForm(std::string name, std::string target)
{
	int i = 0;
	const std::string f3[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm* nForm = NULL;

	while (i < 3)
	{
		if (name == f3[i])
			break;
		i++;
	}

	switch (i)
	{
	case 0:
		nForm = new ShrubberyCreationForm(target);
		break;
	case 1:
		nForm = new RobotomyRequestForm(target);
		break;
	case 2:
		nForm = new PresidentialPardonForm(target);
		break;
	default:
		std::cout << "Do you think you have the right name! Oh boy! Poor intern!" << std::endl;
		break;
	}
	if (i < 3)
		std::cout << "Intern creates " << name << "!" << std::endl;
	return (nForm);
}
