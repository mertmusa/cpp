/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 22:42:15 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/13 11:24:16 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat brr("Selam", 31);
	Intern someRandomIntern;
	AForm* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	try
	{
		rrf->beSigned(brr);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		rrf->execute(brr);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	/*Bureaucrat bro("mehmet", 0);
	std::cout << bro << std::endl;
	//
	ShrubberyCreationForm s("Shrub");
	RobotomyRequestForm r("Robo");
	PresidentialPardonForm p("Presidential");

	std::cout << s << std::endl;
	std::cout << r << std::endl;
	std::cout << p << std::endl;
	//
	//beSigned
	std::cout << "----------------be signed-----------" << std::endl;
	//
	try
	{
		s.beSigned(bro);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	//
	try
	{
		r.beSigned(bro);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		p.beSigned(bro);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	//
	//execute
	std::cout << "--------------execute Form -------------" << std::endl;
	//
	try
	{
		bro.executeForm(s);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	//
	try
	{
		bro.executeForm(r);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	//
	try
	{
		bro.executeForm(p);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;*/
}
