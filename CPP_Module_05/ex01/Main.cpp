/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:56:27 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/10 20:00:42 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat kro;
	std::cout << "\033[0;102m" <<__LINE__ << "\033[0m" << std::endl;
	Bureaucrat bro(kro);
	std::cout << "\033[0;102m" <<__LINE__ << "\033[0m" << std::endl;
	std::cout << bro << std::endl;
	bro.setName("Memur");
	try
	{
		bro.setGrade(10000);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << bro << std::endl;

	try
	{
		//bro.getGrade();
		bro.decrement();
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << bro << std::endl;

	try
	{
		bro.increment();
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << bro << std::endl;

	try
	{
		bro.increment();
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << bro << std::endl;

	try
	{
		bro.setGrade(0);
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << bro << std::endl;

	try
	{
		bro.increment();
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << bro << std::endl;
}
