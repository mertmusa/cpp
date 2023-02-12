/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 22:42:15 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/13 02:16:21 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	Bureaucrat bro("mehmet", 20);
	ShrubberyCreationForm s("Shrub");
	RobotomyRequestForm r("Robo");

	std::cout << s << std::endl;
	std::cout << r << std::endl;

	s.beSigned(bro);
	r.beSigned(bro);

	s.execute(bro);
	r.execute(bro);

	return 0;
}
