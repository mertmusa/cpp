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

int	addfunc(PhoneBook& NewPhoneBook, int *i, int *f, int *t)
{
	std::string tempf, templ, tempn, tempp, tempd;
	int holder = 0;
	//
	if(!NewPhoneBook.NewContact[(*i)].FirstName.empty())
	{
		holder = 1;
		std::cout<<"holder: "<<holder<<"!"<<std::endl;
		tempf = NewPhoneBook.NewContact[(*i)].FirstName;
	}
	std::cout<<std::setw(15)<<std::left<<"First name"<<":";
	std::getline(std::cin,NewPhoneBook.NewContact[(*i)].FirstName);
	if(NewPhoneBook.NewContact[(*i)].FirstName.empty())
	{
		if (holder == 1)
			NewPhoneBook.NewContact[(*i)].FirstName = tempf;
		return (*i);
	}
	//
	if(!NewPhoneBook.NewContact[(*i)].LastName.empty())
	{
		holder = 2;
		std::cout<<"holder: "<<holder<<"!"<<std::endl;
		templ = NewPhoneBook.NewContact[(*i)].LastName;
	}
	std::cout<<std::setw(15)<<std::left<<"Last name"<<":";
	std::getline(std::cin,NewPhoneBook.NewContact[(*i)].LastName);
	if(NewPhoneBook.NewContact[(*i)].LastName.empty())
	{
		if (holder == 2)
		{
			NewPhoneBook.NewContact[(*i)].FirstName = tempf;
			NewPhoneBook.NewContact[(*i)].LastName = templ;
		}
		return (*i);
	}
	//
	std::cout<<std::setw(15)<<std::left<<"Nickname"<<":";
	std::getline(std::cin,NewPhoneBook.NewContact[(*i)].NickName);
	if(NewPhoneBook.NewContact[(*i)].NickName.empty())
		return (*i);
	std::cout<<std::setw(15)<<std::left<<"Phone number"<<":";
	std::getline(std::cin,NewPhoneBook.NewContact[(*i)].PhoneNumber);
	if(NewPhoneBook.NewContact[(*i)].PhoneNumber.empty())
		return (*i);
	std::cout<<std::setw(15)<<std::left<<"Darkest secret"<<":";
	std::getline(std::cin,NewPhoneBook.NewContact[(*i)].DarkestSecret);
	if(NewPhoneBook.NewContact[(*i)].DarkestSecret.empty())
		return (*i);
	if ((*i) < 7)
	{
		if ((*t) != 1)
			(*f) = (*i) + 1;
		return ((*i)+1);
	}
	else
	{
		(*f)++;
		(*t) = 1;
		return (0);
	}
}

void	searchfunc(PhoneBook& NewPhoneBook, int f)
{
	int c = 0;
	int s = 0;
	std::string temp;
	while (c < f)
	{
		if (f != 0)
		{
			std::cout<<"*----------*----------*----------*----------*"<<std::endl;
			std::cout<<"|"<<std::setw(10)<<std::right<<c<<"|";
			std::cout<<std::setw(10)<<std::right<<NewPhoneBook.NewContact[c].FirstName<<"|";
			std::cout<<std::setw(10)<<std::right<<NewPhoneBook.NewContact[c].LastName<<"|";
			std::cout<<std::setw(10)<<std::right<<NewPhoneBook.NewContact[c].NickName<<"|";
			std::cout<<std::endl;
		}
		if (c == f - 1)
			std::cout<<"*----------*----------*----------*----------*"<<std::endl;
		c++;
	}
	std::cout<<std::setw(15)<<std::left<<"Enter index"<<":";
	std::cin>>s;
	if (s >= f)
		std::cout<<"ENTER INDEX NUMBER LESS THAN "<<f<<"!"<<std::endl;
	else if (s >= 0 && s < f)
	{
		std::cout<<"*----------*----------*----------*----------*"<<std::endl;
		std::cout<<"|"<<std::setw(10)<<std::right<<s<<"|";
		std::cout<<std::setw(10)<<std::right<<NewPhoneBook.NewContact[s].FirstName<<"|";
		std::cout<<std::setw(10)<<std::right<<NewPhoneBook.NewContact[s].LastName<<"|";
		std::cout<<std::setw(10)<<std::right<<NewPhoneBook.NewContact[s].NickName<<"|";
		std::cout<<std::endl;
		std::cout<<"*----------*----------*----------*----------*"<<std::endl;
	}
	std::getline(std::cin,temp);
}

int	main()
{
	int i = 0;
	int f = 0;
	int t = 0;
	std::string inputText;
	PhoneBook NewPhoneBook;
	while(1)
	{
		std::cout<<"Enter a command:";
		std::getline(std::cin,inputText);
		if (inputText.compare("ADD") == 0)
			i = addfunc(NewPhoneBook, &i, &f, &t);
		else if (inputText.compare("SEARCH") == 0)
			searchfunc(NewPhoneBook, f);
		else if (inputText.compare("EXIT") == 0)
			break;
		//std::cout<<"i:"<<i<<std::endl;
		//std::cout<<NewPhoneBook.NewContact[0].FirstName<<std::endl;
	}
}
