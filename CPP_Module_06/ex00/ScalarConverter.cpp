/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:25:01 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/17 16:47:08 by mtemel           ###   ########.fr       */
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

static bool is_digits(const std::string &str)
{
	return str.find_first_not_of("0123456789") == std::string::npos;
}

static bool is_digits_d(const std::string &str)
{
	return str.find_first_not_of(".0123456789") == std::string::npos;
}

static void string_printer(std::string s1, std::string s2, std::string s3, std::string s4)
{
	std::cout << std::setw(10) << std::left << "char " << ": " <<s1 << std::endl;
	std::cout << std::setw(10) << std::left << "int " << ": " << s2 << std::endl;
	std::cout << std::setw(10) << std::left << "float " << ": " << s3 << std::endl;
	std::cout << std::setw(10) << std::left << "double " << ": " << s4 << std::endl;
}

static void type_printer(char c, int i, float f, double d)
{
	if (i > 32 && i < 127 && i < INT_MAX && i > INT_MIN)
		std::cout << std::setw(10) << std::left << "char " << ": " << "'" << static_cast<char>(c) << "'" << std::endl;
	else
		std::cout << std::setw(10) << std::left << "char " << ": " << "Non displayable" << std::endl;
	if (i < INT_MAX && i > INT_MIN)
		std::cout << std::setw(10) << std::left << "int " << ": " << static_cast<int>(i) << std::endl;
	else
		std::cout << std::setw(10) << std::left << "int " << ": " << "impossible" << std::endl;
	if(i != f)
	{
		std::cout << std::setw(10) << std::left << "float " << ": " << static_cast<float>(f) << "f" << std::endl;
		std::cout << std::setw(10) << std::left << "double " << ": " << static_cast<double>(d) << std::endl;
	}
	else
	{
		std::cout << std::setw(10) << std::left << "float " << ": " << static_cast<float>(f) << ".0f" << std::endl;
		std::cout << std::setw(10) << std::left << "double " << ": " << static_cast<double>(d) << ".0" << std::endl;
	}
}

void ScalarConverter::convert(std::string input)
{
	if(input == "-inf" || input == "+inf" || input == "nan")
	{
		string_printer("imposible", "imposible", input + "f", input);
		return;
	}
	else if(input == "-inff" || input == "+inff" || input == "nanf")
	{
		string_printer("imposible", "imposible", input, input + "f");
		return;
	}

	std::stringstream ss;
	char c;
	int i, f_flag = 0, dot_count = 0, digit_check = 0, digit_check_n = 0;
	float f;
	double d;
	std::string s = "'";

	for(unsigned long j = 0; j < input.size(); j++)
	{
		if(input[j] == '.')
			dot_count++;
	}
	if (input[input.size() - 1] == 'f')
		f_flag++;
	if((f_flag && is_digits_d(input.substr(0, input.size() - 1))) || (!f_flag && is_digits_d(input.substr(0, input.size()))))
		digit_check++;
	if((f_flag && (input[0] == '-' || input[0] == '+') && is_digits_d(input.substr(1, input.size() - 2))) || (!f_flag && is_digits_d(input.substr(1, input.size() - 1))))
		digit_check_n++;
	if(!(ss << input))
		return;
	if(!isdigit(input[0]) && input.size() == 1 && (ss >> c))
	{
		try
		{
			type_printer(c, c, c, c);
			//string_printer((s += c) + "'", std::to_string(static_cast<int>(c)), std::to_string(static_cast<float>(c)) + "f", std::to_string(static_cast<double>(c)));
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	else if (f_flag > 0 && dot_count <= 1 && (digit_check > 0 || digit_check_n > 0))
	{
		try
		{
			f = std::stof(input); //mac
			//f = std::atof(input.c_str()); //linux
			type_printer(f, f, f, f);
			/*if (f > 32 && f < 127)
				string_printer((s += static_cast<char>(f)) + "'", std::to_string(static_cast<int>(f)), std::to_string(f) + "f",  std::to_string(static_cast<double>(f)));
			else
				string_printer("Non displayable", std::to_string(static_cast<int>(f)), std::to_string(f) + "f",  std::to_string(static_cast<double>(f)));*/
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	else if ( dot_count == 1 && (ss >> d) && (digit_check > 0 || digit_check_n > 0))
	{
		try
		{
			type_printer(d, d, d, d);
			//if (d > 32 && d < 127)
			//	string_printer((s += static_cast<char>(d)) + "'", std::to_string(static_cast<int>(d)), std::to_string(static_cast<float>(d)) + "f",  std::to_string(d));
			//else
			//	string_printer("Non displayable", std::to_string(static_cast<int>(d)), std::to_string(static_cast<float>(d)) + "f",  std::to_string(d));
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	else if (((input[0] == '-' || input[0] == '+') && is_digits(input.substr(1, input.size()))) || is_digits(input))
	{
		try
		{
			i = std::stoi(input); //mac
			//i = std::atoi(input.c_str()); //linux
			type_printer(i, i, i, i);
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	else
	{
		string_printer("imposible", "imposible", "imposible", "imposible");
	}
}
