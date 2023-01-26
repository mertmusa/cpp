/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 21:25:58 by mtemel            #+#    #+#             */
/*   Updated: 2023/01/27 01:59:41 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>


int main(int argc, char *argv[])
{
	std::ifstream iFile;
	std::ofstream oFile;
	std::string s1;
	std::string s2;
	std::string filename;
	std::string fileRep;
	std::string temporalis;

	if(argc != 4)
	{
		std::cout<<"Bad argument number!"<<std::endl;
		return (0);
	}

	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];

	//fileRep = filename.append(".replace");
	//bu buradayken çalışmıyor

	//iFile.open("filename.txt");//this file have to exist
	iFile.open(filename.c_str());//this file have to exist
	/*if(!iFile.good())
	{
		std::cout<<"File can't open!"<<std::endl;
		return (0);
	}*/
	/*if(!iFile.is_open())
	{
		std::cout<<"File can't open!"<<std::endl;
		return (0);
	}*/

	while(std::getline(iFile, temporalis))
	{
		std::cout<<temporalis<<std::endl;
	}

	fileRep = filename.append(".replace");

	oFile.open(fileRep.c_str());//if file does not exist it will create for you
	//if the oFile exists, it will delete the file and re-create it
	if(!oFile.is_open())
	{
		std::cout<<"outFile doesn't open properly!"<<std::endl;
		return (0);
	}

	//iFile>>variable;
	//oFile<<variable;

	iFile.close();
	oFile.close();
}
