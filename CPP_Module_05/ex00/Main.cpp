/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:56:27 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/12 00:51:02 by mtemel           ###   ########.fr       */
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
	bro.setGrade(10000);
	std::cout << bro << std::endl;
	bro.decrement();
	std::cout << bro << std::endl;
	bro.increment();
	std::cout << bro << std::endl;
	bro.increment();
	std::cout << bro << std::endl;
	bro.setGrade(0);
	std::cout << bro << std::endl;
	bro.increment();
	std::cout << bro << std::endl;
}
