/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 22:42:15 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/13 02:56:32 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat bro("mehmet", 20);
	ShrubberyCreationForm s("Shrub");
	RobotomyRequestForm r("Robo");
	PresidentialPardonForm p("Presidential");

	std::cout << s << std::endl;
	std::cout << r << std::endl;
	std::cout << p << std::endl;

	s.beSigned(bro);
	r.beSigned(bro);
	p.beSigned(bro);

	try
	{
		s.execute(bro);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	//
	try
	{
		r.execute(bro);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	//
	try
	{
		p.execute(bro);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
