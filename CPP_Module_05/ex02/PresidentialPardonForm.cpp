/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 02:39:33 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/13 02:42:40 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string sTarget) :
AForm(sTarget, 25, 5)
{
	std::cout << "\033[1;37mPresidentialPardonForm CONSTRUCTOR CALLED\033[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &rcopy) :
AForm(rcopy.getName(), rcopy.getReqGradeSign(), rcopy.getReqGradeExe())
{
	setIsSigned(rcopy.getIsSigned());
	std::cout << "\033[1;37mPresidentialPardonForm COPY CONSTRUCTOR CALLED\033[0m" << std::endl;
}

PresidentialPardonForm PresidentialPardonForm::operator=(const PresidentialPardonForm &rcopy)
{
	setIsSigned(rcopy.getIsSigned());
	std::cout << "\033[1;37mPresidentialPardonForm OPERATOR ASSIGNMENT CALLED\033[0m" << std::endl;
	return(*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "\033[1;37mPresidentialPardonForm DESTRUCTOR CALLED\033[0m" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	//exception
	this->checkException(executor);
	//
	std::cout << this->getName() <<" has been pardoned by Zaphod Beeblebrox" << std::endl;
}
