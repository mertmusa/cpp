/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:50:12 by mtemel            #+#    #+#             */
/*   Updated: 2023/03/30 01:58:48 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <ctime>
#include "string.h"
#include <cstdlib>
#include <iomanip>
#include <map>

class BitcoinExchange
{
	private:
		std::map<int, float> map;
		std::ifstream ifs;
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& copy);
		BitcoinExchange operator = (const BitcoinExchange& copy);
		~BitcoinExchange();
		std::map<int, float> getMap();
		void rateCalculator(char *filename);
};