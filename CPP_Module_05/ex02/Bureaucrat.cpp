/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 00:05:15 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/12 20:11:39 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//Bureaucrat::Bureaucrat()
//{
//	this->setGrade(75);
//	std::cout << "\033[1;33mBUREAUCRAT DEFAULT CONSTRUCTOR CALLED\033[0m" << std::endl;
//}

Bureaucrat::Bureaucrat(const std::string sName, int sGrade) : name(sName)
{
	//this->setName(sName);
	this->setGrade(sGrade);
	std::cout << "\033[1;33mBUREAUCRAT CONSTRUCTOR CALLED\033[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& bcopy) : name(bcopy.name)
{
	*this = bcopy;
	std::cout << "\033[1;33mBUREAUCRAT COPY CONSTRUCTOR CALLED\033[0m" << std::endl;
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat& bcopy)
{
	//setName(bcopy.getName());
	setGrade(bcopy.getGrade());
	std::cout << "\033[1;33mBUREAUCRAT OPERATOR ASSIGNMENT CALLED\033[0m" << std::endl;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "\033[1;33mBUREAUCRAT DESTRUCTOR CALLED\033[0m" << std::endl;
}

//void Bureaucrat::setName(std::string sName)
//{
//	this->name = sName;
//}

void Bureaucrat::setGrade(int sGrade)
{
	try
	{
		if (sGrade < 1)
		{
			this->grade = 1;
			throw GradeTooHighException();
		}
		else if (sGrade > 150)
		{
			this->grade = 150;
			throw GradeTooLowException();
		}
		else
			this->grade = sGrade;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

const std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::increment(int inc)
{
	setGrade(this->getGrade() - inc);
}

void Bureaucrat::decrement(int dec)
{
	setGrade(this->getGrade() + dec);
}

void Bureaucrat::signForm(AForm bcopy)
{
	if (bcopy.getIsSigned())
		std::cout<<this->getName()<<" signed "<< bcopy.getName() <<std::endl;
	else if (this->getGrade() <= bcopy.getReqGradeSign())
		std::cout<<this->getName()<<" didn't sign "<<bcopy.getName()<<" because no one told him/her to do!"<<std::endl;
	else
		std::cout<<this->getName()<<" couldn't sign "<<bcopy.getName()<<" because doesn't have enough grade!"<<std::endl;
	//if (sIsSigned)
	//	std::cout<<this->getName()<<" signed "<<sName<<std::endl;
	//else
	//	std::cout<<this->getName()<<" couldn't sign "<<sName<<" because doesn't have enough grade!"<<std::endl;
}

std::ostream& operator << (std::ostream& ost, const Bureaucrat& bcopy)
{
	ost << bcopy.getName();
	ost << ", bureaucrat grade ";
	ost << bcopy.getGrade();
	return (ost);
}
