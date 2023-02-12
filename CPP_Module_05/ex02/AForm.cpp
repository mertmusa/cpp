/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 21:05:35 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/12 02:56:32 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

//AForm::AForm()
//{
//	this->setIsSigned(false);
//	std::cout << "\033[1;34mAForm DEFAULT CONSTRUCTOR CALLED\033[0m" << std::endl;
//}

AForm::AForm(const std::string sName, int sReqGradeSign, int sReqGradeExe) : name(sName),
reqGradeSign(sReqGradeSign > 150 ? 150 : (sReqGradeSign < 1) ? 1 : sReqGradeSign),
reqGradeExe(sReqGradeExe > 150 ? 150 : (sReqGradeExe < 1) ? 1 : sReqGradeExe)
{
	//this->setName(sName);
	try
	{
		if (sReqGradeSign < 1)
		{
			throw GradeTooHighException();
		}
		if (sReqGradeSign > 150)
		{
			throw GradeTooLowException();
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		if (sReqGradeExe < 1)
		{
			throw GradeTooHighException();
		}
		if (sReqGradeExe > 150)
		{
			throw GradeTooLowException();
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	this->setIsSigned(false);
	std::cout << "\033[1;34mAForm CONSTRUCTOR CALLED\033[0m" << std::endl;
}

AForm::AForm(const AForm& bcopy) : name(bcopy.name), reqGradeSign(bcopy.reqGradeSign), reqGradeExe(bcopy.reqGradeExe)
{
	*this = bcopy;
	std::cout << "\033[1;34mAForm COPY CONSTRUCTOR CALLED\033[0m" << std::endl;
}

AForm& AForm::operator = (const AForm& bcopy)
{
	//setName(bcopy.getName());
	setIsSigned(bcopy.getIsSigned());
	std::cout << "\033[1;34mAForm OPERATOR ASSIGNMENT CALLED\033[0m" << std::endl;
	return (*this);
}

AForm::~AForm()
{
	std::cout << "\033[1;34mAForm DESTRUCTOR CALLED\033[0m" << std::endl;
}

//

//void AForm::setName(std::string sName)
//{
//	this->name = sName;
//}

void AForm::setIsSigned(bool sIsSigned)
{
	this->isSigned = sIsSigned;
}

//void AForm::setReqGradeSign(const int sReqGradeSign)
//{
//	if (sReqGradeSign < 1)
//	{
//		this->reqGradeSign = 1;
//		throw GradeTooHighException();
//	}
//	else if (sReqGradeSign > 150)
//	{
//		this->reqGradeSign = 150;
//		throw GradeTooLowException();
//	}
//	else
//		this->reqGradeSign = sReqGradeSign;
//}

//void AForm::setReqGradeExe(const int sReqGradeExe)
//{
//	if (sReqGradeExe < 1)
//	{
//		this->reqGradeExe = 1;
//		throw GradeTooHighException();
//	}
//	else if (sReqGradeExe > 150)
//	{
//		this->reqGradeExe = 150;
//		throw GradeTooLowException();
//	}
//	else
//		this->reqGradeExe = sReqGradeExe;
//}

//

const std::string AForm::getName() const
{
	return (this->name);
}

bool AForm::getIsSigned() const
{
	return (this->isSigned);
}

int AForm::getReqGradeSign() const
{
	return (this->reqGradeSign);
}

int AForm::getReqGradeExe() const
{
	return (this->reqGradeExe);
}

//void AForm::increment()
//{
//	setGrade(this->getGrade() - 1);
//}

//void AForm::decrement()
//{
//	setGrade(this->getGrade() + 1);
//}

void AForm::beSigned(Bureaucrat sBureaucrat)
{
	if(sBureaucrat.getGrade() <= this->getReqGradeSign())
		this->setIsSigned(true);
}

std::ostream& operator << (std::ostream& ost, const AForm& bcopy)
{
	ost << "AForm name: ";
	ost << bcopy.getName();
	ost << (bcopy.getIsSigned() ? ", signed" : ", not signed");
	ost << ", required grade to sign this Aform: ";
	ost << bcopy.getReqGradeSign();
	ost << ", required grade to execute this Aform: ";
	ost << bcopy.getReqGradeExe();
	return (ost);
}
