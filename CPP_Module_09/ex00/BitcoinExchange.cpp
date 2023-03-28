/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:50:12 by mtemel            #+#    #+#             */
/*   Updated: 2023/03/28 16:59:34 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	std::string line;
	this->ifs.open("../cpp_09/data.csv", std::ifstream::in);
	if(!this->ifs.is_open())
		std::cout << "\033[1;31mCVS could not open!\033[0m" << std::endl;
	else
		std::cout << "\033[1;32mCVS opened properly!\033[0m" << std::endl;
	std::getline(this->ifs, line); // first line : (date, exchange_rate)
	// std::cout << "\033[1;34mLine: \033[0m" << line << std::endl;
	while (std::getline(this->ifs, line))
	{
		//add time property
		//https://stackoverflow.com/questions/32523230/how-convert-string-to-datetime-c
	}
}

BitcoinExchange::~BitcoinExchange()
{

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy)
{
	*this = copy;
}

BitcoinExchange BitcoinExchange::operator = (BitcoinExchange const&)
{
	return (*this);
}

std::map<std::string, float> BitcoinExchange::getMap()
{
	return (this->map);
}