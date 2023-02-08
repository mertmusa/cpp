/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:56:27 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/08 18:04:08 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat bro("Memur", 1);
	std::cout << bro << std::endl;
	bro.decrement();
	std::cout << bro << std::endl;
	bro.increment();
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
	bro.setGrade(150);
	std::cout << bro << std::endl;
	try
	{
		bro.decrement();
	}
	catch(GradeTooLowException &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << bro << std::endl;
}
