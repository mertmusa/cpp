/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 23:50:17 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/22 12:17:54 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(const Span& bcopy)
{
	*this = bcopy;
}

Span& Span::operator = (const Span&)
{
	return (*this);
}

void Span::addNumber(int num)
{
    if (data.size() >= N)
        throw std::out_of_range("\033[1;31mSpan is full\033[0m");
    data.push_back(num);
}

int Span::shortestSpan()
{
    if (data.size() < 2)
        throw std::logic_error("\033[1;31mCannot find shortest span with less than 2 numbers\033[0m");
    sort(data.begin(), data.end());
    int shortest = std::numeric_limits<int>::max();
	//std::cout << "shortest: " << shortest << std::endl;
    for (unsigned int i = 1; i < data.size(); ++i)
	{
        int span = data[i] - data[i-1];
        if (span < shortest) {
            shortest = span;
        }
    }
    return shortest;
}

int Span::longestSpan()
{
    if (data.size() < 2)
        throw std::logic_error("\033[1;31mCannot find longest span with less than 2 numbers\033[0m");
    int longest = 0;
    int min = std::numeric_limits<int>::max(); //2147483647;
    int max = std::numeric_limits<int>::min(); //-2147483648;
	//std::cout << "min: " << min << " max: " << max << std::endl;
    for (unsigned int i = 0; i < data.size(); i++)
	{
		if (data[i] < min)
			min = data[i];
		if (data[i] > max)
			max = data[i];
    }
	longest = max - min;
    return longest;
}
