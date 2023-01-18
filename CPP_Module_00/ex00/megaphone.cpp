/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 20:31:57 by mtemel            #+#    #+#             */
/*   Updated: 2023/01/18 20:51:41 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int	i = 1;
	int	j;
	if(argc > 1)
	{
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
			{
				std::cout<<(char)toupper(argv[i][j]);
				j++;
			}
			i++;
		}
	}
	else
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout<<std::endl;
}
