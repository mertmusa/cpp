/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:25:01 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/15 23:34:17 by mtemel           ###   ########.fr       */
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
	int i;
	float f;
	double d;
	size_t found;

	if(!(ss << input))
		return;
	//std::cout << "GG:" << ss << std::endl;
	//std::cout << "GG:" << input << std::endl;
	//
	if(!isdigit(input[0]) && input.size() == 1)
	{
		try
		{
			if(input.size() == 1 && (ss >> c))
			{
				std::cout << std::setw(10) << std::left << "char" << ": ";
				std::cout << "'" << c << "'" << std::endl;
				std::cout << std::setw(10) << std::left << "int" << ": ";
				std::cout << static_cast<int>(c) << std::endl;
				//std::cout << (int)c << std::endl;
				std::cout << std::setw(10) << std::left << "float" << ": ";
				std::cout << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
				//std::cout << std::fixed << std::setprecision(1) << (float)c << "f" << std::endl;
				std::cout << std::setw(10) << std::left << "double" << ": ";
				std::cout << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
				//std::cout << std::fixed << std::setprecision(1) << (double)c << std::endl;
			}
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	else if(input == "-inf" || input == "+inf" || input == "nan")
	{
		std::cout << std::setw(10) << std::left << "char" << ": impossible"<<std::endl;
		std::cout << std::setw(10) << std::left << "int" << ": impossible"<<std::endl;
		std::cout << std::setw(10) << std::left << "float" << ": " << input << "f" <<std::endl;
		std::cout << std::setw(10) << std::left << "double" << ": " << input <<std::endl;
	}
	else if(input == "-inff" || input == "+inff" || input == "nanf")
	{
		std::cout << std::setw(10) << std::left << "char" << ": impossible"<<std::endl;
		std::cout << std::setw(10) << std::left << "int" << ": impossible"<<std::endl;
		std::cout << std::setw(10) << std::left << "float" << ": " << input <<std::endl;
		std::cout << std::setw(10) << std::left << "double" << ": " << input.substr(0,input.size() - 1) <<std::endl;
	}
	else if ((found = input.find("f")) && found != std::string::npos && (ss >> f))
	{
		//std::cout << std::setw(10) << std::left << "FFFFFFFFFF" << f << std::endl; // float check
		i = static_cast<int>(f);
		std::cout << std::setw(10) << std::left << "char" << ": ";
		if (i > 32 && i < 127)
			std::cout << "'" << static_cast<char>(f) << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
		std::cout << std::setw(10) << std::left << "int" << ": " << i << std::endl;
		std::cout << std::setw(10) << std::left << "float" << ": " << f << "f" << std::endl;
		std::cout << std::setw(10) << std::left << "double" << ": " << static_cast<double>(f) << std::endl;
	}
	else if ((found = input.find(".")) && found != std::string::npos && (ss >> d))
	{
		//std::cout << std::setw(10) << std::left << "DDDDDDDD"<< d << std::endl; // double check
		i = static_cast<int>(d);
		std::cout << std::setw(10) << std::left << "char" << ": ";
		if (i > 32 && i < 127)
			std::cout << "'" << static_cast<char>(d) << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
		std::cout << std::setw(10) << std::left << "int" << ": " << static_cast<int>(d) << std::endl;
		std::cout << std::setw(10) << std::left << "float" << ": " << static_cast<float>(d) << "f" << std::endl;
		std::cout << std::setw(10) << std::left << "double" << ": " << d << std::endl;
	}
	else if (ss >> i)
	{
		std::cout << std::setw(10) << std::left << "char" << ": ";
		if (i > 32 && i < 127)
			std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
		std::cout << std::setw(10) << std::left << "int" << ": ";
		std::cout << i << std::endl;
		//std::cout << (int)c << std::endl;
		std::cout << std::setw(10) << std::left << "float" << ": ";
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
		//std::cout << std::fixed << std::setprecision(1) << (float)c << "f" << std::endl;
		std::cout << std::setw(10) << std::left << "double" << ": ";
		std::cout << std::fixed << std::setprecision(1) << static_cast<double>(i) << std::endl;
		//std::cout << std::fixed << std::setprecision(1) << (double)c << std::endl;
	}
	else
	{
		std::cout << std::setw(10) << std::left << "char" << ": impossible"<<std::endl;
		std::cout << std::setw(10) << std::left << "int" << ": impossible"<<std::endl;
		std::cout << std::setw(10) << std::left << "float" << ": impossible"<<std::endl;
		std::cout << std::setw(10) << std::left << "double" << ": impossible"<<std::endl;
	}
}

