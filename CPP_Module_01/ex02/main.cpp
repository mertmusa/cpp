/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:00:41 by mtemel            #+#    #+#             */
/*   Updated: 2023/01/28 16:33:52 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	//
	std::cout<<"\033[1;34m"<<std::setw(45)<<std::left<<"The memory address of the string variable"<<":"<<"\033[0m";
	std::cout<<&str<<std::endl;
	std::cout<<"\033[1;34m"<<std::setw(45)<<std::left<<"The memory address held by stringPTR"<<":"<<"\033[0m";
	std::cout<<stringPTR<<std::endl;
	std::cout<<"\033[1;34m"<<std::setw(45)<<std::left<<"The memory address held by stringREF"<<":"<<"\033[0m";
	std::cout<<&stringREF<<std::endl;
	//
	std::cout<<std::setw(15)<<std::right<<"-----"<<std::endl;
	//
	std::cout<<"\033[1;34m"<<std::setw(45)<<std::left<<"The value of the string variable"<<":"<<"\033[0m";
	std::cout<<str<<std::endl;
	std::cout<<"\033[1;34m"<<std::setw(45)<<std::left<<"The value pointed to by stringPTR"<<":"<<"\033[0m";
	std::cout<<*stringPTR<<std::endl;
	std::cout<<"\033[1;34m"<<std::setw(45)<<std::left<<"The value pointed to by stringREF:"<<":"<<"\033[0m";
	std::cout<<stringREF<<std::endl;
}
