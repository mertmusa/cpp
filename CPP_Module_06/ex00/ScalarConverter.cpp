/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:25:01 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/15 17:27:37 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	//std::cout << "\033[1;33mSCALAR CONVERTER DEFAULT CONSTRUCTOR CALLED\033[0m" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &scopy)
{
	//std::cout << "\033[1;33mSCALAR CONVERTER COPY CONSTRUCTOR CALLED\033[0m" << std::endl;
	*this = scopy;
}

ScalarConverter ScalarConverter::operator = (ScalarConverter const&)
{
	//std::cout << "\033[1;33mSCALAR CONVERTER ASSIGNMENT OPERATOR CALLED\033[0m" << std::endl;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
	//std::cout << "\033[1;33mSCALAR CONVERTER DESTRUCTOR CALLED\033[0m" << std::endl;
}

void ScalarConverter::convert(std::string input)
{
	std::stringstream ss;
	char c;
	//int i;
	//float f;
	//double d;

	ss << input;

	//
	if(input.size() == 1 && !isdigit(input[0]))
	{
		try
		{
			std::cout << std::setw(10) << std::left << "char" << ": '";
			ss >> c;
			std::cout << c << "'" << std::endl;
			std::cout << std::setw(10) << std::left << "int" << ": ";
			std::cout << (int)c << std::endl;
			std::cout << std::setw(10) << std::left << "float" << ": ";
			std::cout << std::fixed << std::setprecision(1) << (float)c << "f" << std::endl;
			std::cout << std::setw(10) << std::left << "double" << ": ";
			std::cout << std::fixed << std::setprecision(1) << (double)c << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		//
	}
}
