/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 02:35:47 by mtemel            #+#    #+#             */
/*   Updated: 2023/03/31 12:53:48 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN& copy)
{
	*this = copy;
}

RPN RPN::operator = (RPN const&)
{
	return (*this);
}

void RPN::calculate(char *rpnot)
{
	if(!rpnot || !strchr(rpnot, ' ') || (!strchr(rpnot, '+') && !strchr(rpnot, '-') && !strchr(rpnot, '/') && !strchr(rpnot, '*')))
	{
		std::cout << "Error!" << std::endl;
		return;
	}

	char *ptr = strtok(rpnot, " ");
	
	// std::cout << ptr << std::endl;
	// if(!isdigit(*ptr) || strlen(ptr) != 1)
	// {
	// 	std::cout << "Error!" << std::endl;
	// 	return;
	// }

	int temp = 0;
	int i = 0;
	while (ptr)
	{
		if (isdigit(*ptr) && strlen(ptr) == 1 && ( i == 0 || i % 2 != 0))
		{
			this->numb.push_back(atoi(ptr));
		}
		else if (strlen(ptr) == 1 && i % 2 == 0 && strchr("+-/*", ptr[0]))
		{
			if(ptr[0] == '+')
				temp = this->numb[0] + this->numb[1];
			else if(ptr[0] == '-')
				temp = this->numb[0] - this->numb[1];
			else if(ptr[0] == '/')
			{
				if (this->numb[1] != 0)
					temp = this->numb[0] / this->numb[1];
				else
				{
					std::cout << "Error!" << std::endl;
					return;
				}
			}
			else if(ptr[0] == '*')
				temp = this->numb[0] * this->numb[1];
			this->numb.push_back(temp);
			this->numb.pop_front();
			this->numb.pop_front();
		}
		else
		{
			std::cout << "Error!" << std::endl;
			return;
		}
		ptr = strtok(NULL, " ");
		i++;
	}

	// for (std::deque<int>::iterator it = numb.begin(); it != numb.end(); it++)
	// {
	// 	std::cout << "numb: " << *it << std::endl;
	// }
	
	// for (std::vector<char>::iterator it = token.begin(); it != token.end(); it++)
	// {
	// 	std::cout << "token: " << *it << std::endl;
	// }

	std::cout << "numb: " << this->numb[0] << std::endl;

	
}