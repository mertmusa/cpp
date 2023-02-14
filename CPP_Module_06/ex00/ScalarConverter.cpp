/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:25:01 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/15 02:45:29 by mtemel           ###   ########.fr       */
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
	//std::cout << "input size:" << input.size();
	if(input.size() == 1 && !isdigit(input[0]))
	{
		std::cout << std::setw(10) << std::left << "char" << ": ";
		try
		{
			ss >> c;
			std::cout << c << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		//
		std::cout << std::setw(10) << std::left << "int" << ": ";
		try
		{
			ss >> c;
			std::cout << (int)c << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		//
				std::cout << std::setw(10) << std::left << "float" << ": ";
		try
		{
			ss >> c;
			std::cout << (float)c << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		//
		std::cout << std::setw(10) << std::left << "double" << ": ";
		try
		{
			ss >> c;
			std::cout << (double)c << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	//

	/*std::cout << std::setw(10) << std::left << "int" << ": ";
	try
	{
		ss >> i;
		std::cout << i << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	//

	std::cout << std::setw(10) << std::left << "float" << ": ";
	try
	{
		ss >> f;
		std::cout << f << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	//

	std::cout << std::setw(10) << std::left << "double" << ": ";
	try
	{
		ss >> d;
		std::cout << d << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}*/
}
