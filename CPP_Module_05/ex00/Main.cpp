/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:56:27 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/08 22:45:21 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat bro;
	try
	{
		Bureaucrat bro("Memur", 10000);
	}
	catch(GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << bro << std::endl;

	try
	{
		//bro.getGrade();
		bro.decrement();
	}
	catch(GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << bro << std::endl;

	try
	{
		bro.increment();
	}
	catch(GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << bro << std::endl;

	try
	{
		bro.increment();
	}
	catch(GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << bro << std::endl;

	try
	{
		bro.setGrade(1);
	}
	catch(GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << bro << std::endl;

	try
	{
		bro.decrement();
	}
	catch(GradeTooLowException &e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << bro << std::endl;
}
