/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 14:37:26 by mtemel            #+#    #+#             */
/*   Updated: 2023/01/28 16:28:04 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
	std::cout<<"\033[1;31m -> DEBUG <-\033[0m"<<std::endl;
	std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger."<<std::endl;
	std::cout<<"I really do!"<<std::endl;
}

void Harl::info()
{
	std::cout<<"\033[1;31m -> INFO <-\033[0m"<<std::endl;
	std::cout<<"I cannot believe adding extra bacon costs more money."<<std::endl;
	std::cout<<"You didn’t put enough bacon in my burger!"<<std::endl;
	std::cout<<"If you did, I wouldn’t be asking for more!"<<std::endl;
}

void Harl::warning()
{
	std::cout<<"\033[1;31m -> WARNING <-\033[0m"<<std::endl;
	std::cout<<"I think I deserve to have some extra bacon for free."<<std::endl;
	std::cout<<"I’ve been coming for years whereas you started working here since last month."<<std::endl;
}

void Harl::error()
{
	std::cout<<"\033[1;31m -> ERROR <-\033[0m"<<std::endl;
	std::cout<<"This is unacceptable!"<<std::endl;
	std::cout<<"I want to speak to the manager now."<<std::endl;
}

int	my_fx(const char *s)
{
	std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while(i < 4)
	{
		if(s == str[i])
			return (i);
		i++;
	}
	return (i);
}

void	Harl::complain(std::string level)
{
	switch (my_fx(level.c_str())){
		case 0:
			this->debug();
			break;
		case 1:
			this->info();
			break;
		case 2:
			this->warning();
			break;
		case 3:
			this->error();
			break;
	}
}