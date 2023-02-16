/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:38:00 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/16 22:18:17 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _GLIBCXX_USE_C99 1 //linux

#include <climits>
#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <iomanip>

class ScalarConverter
{
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &scopy);
		ScalarConverter operator = (const ScalarConverter &scopy);
		~ScalarConverter();

		//static class - only static members and attributes

		static void convert(std::string input);
};
