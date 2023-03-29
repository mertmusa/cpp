/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:50:12 by mtemel            #+#    #+#             */
/*   Updated: 2023/03/30 02:00:30 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	std::string line;
	char *ptr;
	float rate;
	// tm prev_time;
	// tm curr_time;
	int curr_stamp;
	int curr_year;
	int curr_month;
	int curr_day;

	this->ifs.open("../cpp_09/data.csv", std::ifstream::in);
	if(!this->ifs.is_open())
		std::cout << "\033[1;31mCVS file could not open!\033[0m" << std::endl;
	else
		std::cout << "\033[1;32mCVS file opened properly!\033[0m" << std::endl;

	std::getline(this->ifs, line); // first line : (date, exchange_rate)
	// std::cout << "\033[1;34mFirst line (nom): \033[0m" << line << std::endl;


	while(std::getline(this->ifs, line))
	{
		ptr = strtok((char *)(line.c_str()), "-,"); //const char to char
		curr_year = atoi(ptr);
		curr_month = atoi(strtok(NULL, "-,"));
		curr_day = atoi(strtok(NULL, "-,"));
		rate = atof(strtok(NULL, "-,"));

		curr_stamp = (curr_year << 16) + (curr_month << 8) + (curr_day);

		// this->map[curr_stamp] = rate;
		this->map.insert(std::pair<int, float>(curr_stamp, rate));
	}

	// for (std::map<int, float>::iterator it = this->map.begin(); it != map.end(); it++)
	// {
	// 	std::cout << "Map key: " << (*it).first << ", map value: " << std::fixed << std::setprecision(2) << (*it).second << std::endl;
	// }

	//---------------------
	//??????????????????????????????????
	//---------------------

	// std::getline(this->ifs, line);
	// // std::cout << "\033[1;34mLine: \033[0m" << line << std::endl;

	// ptr = strtok((char *)(line.c_str()), "-,"); //const char to char
	// curr_year = atoi(ptr);
	// curr_month = atoi(strtok(NULL, "-,"));
	// curr_day = atoi(strtok(NULL, "-,"));
	// rate = atof(strtok(NULL, "-,"));

	// std::cout << std::left << std::setw(15) << "\033[1;35mYear" << ": \033[0m" << curr_year << std::endl;
	// std::cout << std::left << std::setw(15) << "\033[1;35mMonth" << ": \033[0m" << curr_month << std::endl;
	// std::cout << std::left << std::setw(15) << "\033[1;35mDay" << ": \033[0m" << curr_day << std::endl;
	// std::cout << std::left << std::setw(15) << "\033[1;35mRate" << ": \033[0m" << rate << std::endl;

	// curr_stamp = (curr_year << 16) + (curr_month << 8) + (curr_day);
	// std::cout << std::left << std::setw(15) << "\033[1;35mStamp" << ": \033[0m" << curr_stamp << std::endl;

	// this->map[curr_stamp] = rate;
	
	// for (std::map<int, float>::iterator it = this->map.begin(); it != map.end(); it++)
	// {
	// 	std::cout << "Map key: " << (*it).first << ", map value: " << (*it).second << std::endl;
	// }

	//################################

	// std::getline(this->ifs, line);
	// std::cout << "\033[1;34mLine: \033[0m" << line << std::endl;

	// ptr = strtok((char *)(line.c_str()), "-,"); //const char to char
	// curr_time.tm_year = atoi(ptr);
	// curr_time.tm_mon = atoi(strtok(NULL, "-,"));
	// curr_time.tm_mday = atoi(strtok(NULL, "-,"));
	// rate = atof(strtok(NULL, "-,"));

	// prev_time = curr_time;
	
	// std::cout << std::left << std::setw(15) << "\033[1;35mYear" << ": \033[0m" << prev_time.tm_year << std::endl;
	// std::cout << std::left << std::setw(15) << "\033[1;35mMonth" << ": \033[0m" << prev_time.tm_mon << std::endl;
	// std::cout << std::left << std::setw(15) << "\033[1;35mDay" << ": \033[0m" << prev_time.tm_mday << std::endl;
	// std::cout << std::left << std::setw(15) << "\033[1;35mRate" << ": \033[0m" << rate << std::endl;

	// stamp = (prev_time.tm_year << 16) + (prev_time.tm_mon << 8) + (prev_time.tm_mday);
	// std::cout << std::left << std::setw(15) << "\033[1;35mStamp" << ": \033[0m" << stamp << std::endl;

	// this->map[stamp] = rate;
	
	// for (std::map<int, float>::iterator it = this->map.begin(); it != map.end(); it++)
	// {
	// 	std::cout << "Map key: " << (*it).first << ", map value: " << (*it).second << std::endl;
	// }
	
	//---------------

	// std::getline(this->ifs, line);
	// std::cout << "\033[1;34mLine: \033[0m" << line << std:void
	//https://stackoverflow.com/questions/32523230/how-convert-string-to-datetime-c
	
	// tm *ltm1 = new tm;
	// ptr = strtok((char *)(line.c_str()), "-,"); //const char to char
	// ltm1->tm_year = atoi(ptr);
	// std::cout << std::left << std::setw(15) << "\033[1;35mYear" << ": \033[0m" << ltm1->tm_year << std::endl;
	// ltm1->tm_mon = atoi(strtok(NULL, "-,"));
	// std::cout << std::left << std::setw(15) << "\033[1;35mMonth" << ": \033[0m" << ltm1->tm_mon << std::endl;
	// ltm1->tm_mday = atoi(strtok(NULL, "-,"));
	// std::cout << std::left << std::setw(15) << "\033[1;35mDay" << ": \033[0m" << ltm1->tm_mday << std::endl;
	// rate = atof(strtok(NULL, "-,"));
	// std::cout << std::left << std::setw(15) << "\033[1;35mRate" << ": \033[0m" << rate << std::endl;

	//***********************

	// ptr = strtok((char *)(line.c_str()), "-,"); //const char to char
	// curr_time.tm_year = atoi(ptr);
	// curr_time.tm_mon = atoi(strtok(NULL, "-,"));
	// curr_time.tm_mday = atoi(strtok(NULL, "-,"));
	// rate = atof(strtok(NULL, "-,"));
	
	// prev_time = curr_time;

	// std::cout << std::left << std::setw(15) << "\033[1;35mYear" << ": \033[0m" << prev_time.tm_year << std::endl;
	// std::cout << std::left << std::setw(15) << "\033[1;35mMonth" << ": \033[0m" << prev_time.tm_mon << std::endl;
	// std::cout << std::left << std::setw(15) << "\033[1;35mDay" << ": \033[0m" << prev_time.tm_mday << std::endl;
	// std::cout << std::left << std::setw(15) << "\033[1;35mRate" << ": \033[0m" << rate << std::endl;

	//---------------

	// std::getline(this->ifs, line);
	// std::cout << "\033[1;34mLine: \033[0m" << line << std::endl;
	
	//add time property
	//https://stackoverflow.com/questions/32523230/how-convert-string-to-datetime-c
	
	// tm *ltm2 = new tm;
	// ptr = strtok((char *)(line.c_str()), "-,"); //const char to char
	// ltm2->tm_year = atoi(ptr);
	// std::cout << std::left << std::setw(15) << "\033[1;35mYear" << ": \033[0m" << ltm2->tm_year << std::endl;
	// ltm2->tm_mon = atoi(strtok(NULL, "-,"));
	// std::cout << std::left << std::setw(15) << "\033[1;35mMonth" << ": \033[0m" << ltm2->tm_mon << std::endl;
	// ltm2->tm_mday = atoi(strtok(NULL, "-,"));
	// std::cout << std::left << std::setw(15) << "\033[1;35mDay" << ": \033[0m" << ltm2->tm_mday << std::endl;
	// rate = atof(strtok(NULL, "-,"));
	// std::cout << std::left << std::setw(15) << "\033[1;35mRate" << ": \033[0m" << rate << std::endl;

	//***********************

	// ptr = strtok((char *)(line.c_str()), "-,"); //const char to char
	// curr_time.tm_year = atoi(ptr);
	// curr_time.tm_mon = atoi(strtok(NULL, "-,"));
	// curr_time.tm_mday = atoi(strtok(NULL, "-,"));
	// rate = atof(strtok(NULL, "-,"));
	
	// //prev_time = curr_time;

	// std::cout << std::left << std::setw(15) << "\033[1;35mYear" << ": \033[0m" << curr_time.tm_year << std::endl;
	// std::cout << std::left << std::setw(15) << "\033[1;35mMonth" << ": \033[0m" << curr_time.tm_mon << std::endl;
	// std::cout << std::left << std::setw(15) << "\033[1;35mDay" << ": \033[0m" << curr_time.tm_mday << std::endl;
	// std::cout << std::left << std::setw(15) << "\033[1;35mRate" << ": \033[0m" << rate << std::endl;

	//----------------------

	// if(ltm1 < ltm2)
	// {
		// std::cout << "Time 2 is greater than time 1" << std::endl;
	// }
	
	//************************

	// if(prev_time.tm_year < curr_time.tm_year || prev_time.tm_mon < curr_time.tm_mon || prev_time.tm_mday < curr_time.tm_mday)
	// {
	// 	std::cout << "Current time is greater than previous time! " << prev_time.tm_mday << " " << curr_time.tm_mday << std::endl;
	// }

	// delete ltm1;
	// delete ltm2;

	// struct tm
	// {
	// 	int tm_sec;   // seconds of minutes from 0 to 61
	// 	int tm_min;   // minutes of hour from 0 to 59
	// 	int tm_hour;  // hours of day from 0 to 24
	// 	int tm_mday;  // day of month from 1 to 31
	// 	int tm_mon;   // month of year from 0 to 11
	// 	int tm_year;  // year since 1900
	// 	int tm_wday;  // days since sunday
	// 	int tm_yday;  // days since January 1st
	// 	int tm_isdst; // hours of daylight savings time
	// }
}

BitcoinExchange::~BitcoinExchange()
{
	this->ifs.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy)
{
	*this = copy;
}

BitcoinExchange BitcoinExchange::operator = (BitcoinExchange const&)
{
	return (*this);
}

std::map<int, float> BitcoinExchange::getMap()
{
	return (this->map);
}

void BitcoinExchange::rateCalculator(char *filename)
{
	std::ifstream ifn;
	std::string line;
	std::string temp;
	char *ptr;
	float rate;
	int curr_stamp;
	int curr_year;
	int curr_month;
	int curr_day;

	ifn.open(filename, std::ifstream::in);
	if (!ifn.is_open())
	{
		std::cout << "Error: could not open file." << std::endl;
		return;
	}
	
	while(std::getline(ifn, line))
	{
		if (!strchr(line.c_str(), '|') || !strchr(line.c_str(), '-'))
		{
			std::cout << "Error: bad input => " << line << std::endl;
			continue;
		}
		temp = line;
		ptr = strtok((char *)(line.c_str()), "-|"); //const char to char
		curr_year = atoi(ptr);
		if (curr_year < 2000 || curr_year > 2023)
		{
			std::cout << "Error: invalid year => " << temp << std::endl;
			continue;
		}
		curr_month = atoi(strtok(NULL, "-|"));
		if (curr_month < 1 || curr_month > 12)
		{
			std::cout << "Error: invalid month => " << temp << std::endl;
			continue;
		}
		curr_day = atoi(strtok(NULL, "-|"));
		if (curr_day < 1 || curr_day > 31)
		{
			std::cout << "Error: invalid day => " << temp << std::endl;
			continue;
		}
		rate = atof(strtok(NULL, "|"));
		if (rate < 0)
		{
			std::cout << "Error: not a positive number." << std::endl;
			continue;
		}
		else if (rate > 1000)
		{
			std::cout << "Error: too large a number." << std::endl;
			continue;
		}
		curr_stamp = (curr_year << 16) + (curr_month << 8) + (curr_day);
		(void)curr_stamp;
		for (std::map<int, float>::iterator it = this->map.begin(); it != map.end(); it++)
		{
			if ((*it).first == curr_stamp)
			{
				std::cout << temp.substr(0,10) << " => " << temp.substr(13, temp.size() - 13) << " = " << (*it).second * rate << std::endl;
				break;
			}
			else if ((*it).first > curr_stamp)
			{
				std::cout << temp.substr(0,10) << " => " << temp.substr(13, temp.size() - 13) << " = " << (*(--it)).second * rate << std::endl;
				break;
			}
			// std::cout << "Map key: " << (*it).first << ", map value: " << std::fixed << std::setprecision(2) << (*it).second << std::endl;
		}
	}
	ifn.close();
}