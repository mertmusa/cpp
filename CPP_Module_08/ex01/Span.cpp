/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 23:50:17 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/22 12:11:18 by mtemel           ###   ########.fr       */
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
        throw std::out_of_range("Span is full");
    data.push_back(num);
}

int Span::shortestSpan()
{
    if (data.size() < 2)
        throw std::logic_error("Cannot find shortest span with less than 2 numbers");
    std::sort(data.begin(), data.end());
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
        throw std::logic_error("Cannot find longest span with less than 2 numbers");
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
