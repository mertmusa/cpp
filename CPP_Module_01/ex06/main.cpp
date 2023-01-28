/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:28:10 by mtemel            #+#    #+#             */
/*   Updated: 2023/01/28 16:46:26 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harlFilter;
	if (argc == 2)
		harlFilter.complain(argv[1]);
	else
		harlFilter.complain("GG");
	return (0);
}