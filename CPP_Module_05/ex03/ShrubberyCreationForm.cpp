/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 22:41:30 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/13 10:13:23 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string sTarget) :
AForm("shrubbery creation", sTarget, 145, 137)
{
	std::cout << "\033[1;35mShrubberyCreationForm CONSTRUCTOR CALLED\033[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &scopy) :
AForm(scopy.getName(), scopy.getTarget(), scopy.getReqGradeSign(), scopy.getReqGradeExe())
{
	setIsSigned(scopy.getIsSigned());
	std::cout << "\033[1;35mShrubberyCreationForm COPY CONSTRUCTOR CALLED\033[0m" << std::endl;
}

ShrubberyCreationForm ShrubberyCreationForm::operator=(const ShrubberyCreationForm &scopy)
{
	setIsSigned(scopy.getIsSigned());
	std::cout << "\033[1;35mShrubberyCreationForm OPERATOR ASSIGNMENT CALLED\033[0m" << std::endl;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "\033[1;35mShrubberyCreationForm DESTRUCTOR CALLED\033[0m" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	//exceptions
	this->checkException(executor);
	//
	std::ofstream	ofile;
	std::string		filename = this->getTarget() + "_shrubbery";
	std::string		text = "\
              _..--''``\\--....__    _..,_\n\
     ____ _.-'`   .-/\";  `       ```<._  ``-+'~=. ____\n\
    /  .-' _..--.'_    \\                    `(^) )   /\n\
   /  ((.-'    (< _     ;.__                 ; `~   /\n\
  /             `-._,_)'``  ```--..._____..-'      /\n\
 / Purrrr...                     Mert Musa Temel  /\n\
 `````````````````````````````````````````````````\n";
	ofile.open(filename.c_str());
	if(!ofile.is_open())
	{
		std::cout << "\033[4;95mFile can not open!!!\033[0m" << std::endl;
	}
	else
	{
		ofile<<text;
		ofile<<"File opened and written properly!"<<std::endl;
		std::cout<<"\033[4;95mFile opened and written properly!\033[0m"<<std::endl;
	}
	ofile.close();
}
