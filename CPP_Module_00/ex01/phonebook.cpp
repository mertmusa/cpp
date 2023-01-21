/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 00:23:36 by mtemel            #+#    #+#             */
/*   Updated: 2023/01/22 01:35:05 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	addfunc(PhoneBook NewPhoneBook, int i)
{
	std::cout<<std::setw(15)<<std::left<<"First name"<<":";
	std::getline(std::cin,NewPhoneBook.NewContact[i].FirstName);
	if(NewPhoneBook.NewContact[i].FirstName.empty())
		return (i);
	std::cout<<std::setw(15)<<std::left<<"Last name"<<":";
	std::getline(std::cin,NewPhoneBook.NewContact[i].LastName);
	if(NewPhoneBook.NewContact[i].LastName.empty())
		return (i);
	std::cout<<std::setw(15)<<std::left<<"Nickname"<<":";
	std::getline(std::cin,NewPhoneBook.NewContact[i].NickName);
	if(NewPhoneBook.NewContact[i].NickName.empty())
		return (i);
	std::cout<<std::setw(15)<<std::left<<"Phone number"<<":";
	std::getline(std::cin,NewPhoneBook.NewContact[i].PhoneNumber);
	if(NewPhoneBook.NewContact[i].PhoneNumber.empty())
		return (i);
	std::cout<<std::setw(15)<<std::left<<"Darkest secret"<<":";
	std::getline(std::cin,NewPhoneBook.NewContact[i].DarkestSecret);
	if(NewPhoneBook.NewContact[i].DarkestSecret.empty())
		return (i);
	if (i < 7)
		return (i+1);
	else
		return (0);
}

int	main()
{
	int i = 0;
	std::string inputText;
	PhoneBook NewPhoneBook;
	while(1)
	{
		std::cout<<"Enter a command:";
		std::getline(std::cin,inputText);
		if (inputText.compare("ADD") == 0)
			i = addfunc(NewPhoneBook, i);
		else if (inputText.compare("SEARCH") == 0)
			std::cout<<"User entered SEARCH!"<<std::endl;
		else if (inputText.compare("EXIT") == 0)
			break;
		std::cout<<"i:"<<i<<std::endl;
	}
}
