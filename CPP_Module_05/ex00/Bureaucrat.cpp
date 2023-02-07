/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 00:05:15 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/08 00:13:00 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string sName, int sGrade)
{
	this->setGrade(sGrade);
	this->setName(sName);
	std::cout << "\033[1;33mBUREAUCRAT CONSTRUCTOR CALLED\033[0m" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "\033[1;33mBUREAUCRAT DESTRUCTOR CALLED\033[0m" << std::endl;
}

Bureaucrat::setName(const std::string sName)
{
	this->name = sName;
}

Bureaucrat::setGrade(int sGrade)
{
	try
}
