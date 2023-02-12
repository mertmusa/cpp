/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 02:02:08 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/13 02:27:06 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string sTarget) :
AForm(sTarget, 72, 45)
{
	std::cout << "\033[1;36mRobotomyRequestForm CONSTRUCTOR CALLED\033[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rcopy) :
AForm(rcopy.getName(), rcopy.getReqGradeSign(), rcopy.getReqGradeExe())
{
	setIsSigned(rcopy.getIsSigned());
	std::cout << "\033[1;36mRobotomyRequestForm COPY CONSTRUCTOR CALLED\033[0m" << std::endl;
}

RobotomyRequestForm RobotomyRequestForm::operator=(const RobotomyRequestForm &rcopy)
{
	setIsSigned(rcopy.getIsSigned());
	std::cout << "\033[1;36mRobotomyRequestForm OPERATOR ASSIGNMENT CALLED\033[0m" << std::endl;
	return(*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "\033[1;36mRobotomyRequestForm DESTRUCTOR CALLED\033[0m" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	//exception
	this->checkException(executor);
	//
	std::cout << "some drilling noise !!!!!!!" << std::endl;

	srand(time(NULL));
	int num = rand();

	//std::cout << num << std::endl;
	if (num % 2)
		std::cout << this->getName() << " has been robotomized successfully!!" << std::endl;
	else
		std::cout << "The robotomy failed!" << std:: endl;
}
