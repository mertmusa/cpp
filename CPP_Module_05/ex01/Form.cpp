/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 21:05:35 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/12 02:56:32 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//Form::Form()
//{
//	this->setIsSigned(false);
//	std::cout << "\033[1;34mForm DEFAULT CONSTRUCTOR CALLED\033[0m" << std::endl;
//}

Form::Form(const std::string sName, int sReqGradeSign, int sReqGradeExe) : name(sName),
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
	std::cout << "\033[1;34mForm CONSTRUCTOR CALLED\033[0m" << std::endl;
}

Form::Form(const Form& bcopy) : name(bcopy.name), reqGradeSign(bcopy.reqGradeSign), reqGradeExe(bcopy.reqGradeExe)
{
	*this = bcopy;
	std::cout << "\033[1;34mForm COPY CONSTRUCTOR CALLED\033[0m" << std::endl;
}

Form& Form::operator = (const Form& bcopy)
{
	//setName(bcopy.getName());
	setIsSigned(bcopy.getIsSigned());
	std::cout << "\033[1;34mForm OPERATOR ASSIGNMENT CALLED\033[0m" << std::endl;
	return (*this);
}

Form::~Form()
{
	std::cout << "\033[1;34mForm DESTRUCTOR CALLED\033[0m" << std::endl;
}

//

//void Form::setName(std::string sName)
//{
//	this->name = sName;
//}

void Form::setIsSigned(bool sIsSigned)
{
	this->isSigned = sIsSigned;
}

//void Form::setReqGradeSign(const int sReqGradeSign)
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

//void Form::setReqGradeExe(const int sReqGradeExe)
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

const std::string Form::getName() const
{
	return (this->name);
}

bool Form::getIsSigned() const
{
	return (this->isSigned);
}

int Form::getReqGradeSign() const
{
	return (this->reqGradeSign);
}

int Form::getReqGradeExe() const
{
	return (this->reqGradeExe);
}

//void Form::increment()
//{
//	setGrade(this->getGrade() - 1);
//}

//void Form::decrement()
//{
//	setGrade(this->getGrade() + 1);
//}

void Form::beSigned(Bureaucrat sBureaucrat)
{
	if(sBureaucrat.getGrade() <= this->getReqGradeSign())
		this->setIsSigned(true);
}

std::ostream& operator << (std::ostream& ost, const Form& bcopy)
{
	ost << "Form name: ";
	ost << bcopy.getName();
	ost << (bcopy.getIsSigned() ? ", signed" : ", not signed");
	ost << ", required grade to sign this form: ";
	ost << bcopy.getReqGradeSign();
	ost << ", required grade to execute this form: ";
	ost << bcopy.getReqGradeExe();
	return (ost);
}
