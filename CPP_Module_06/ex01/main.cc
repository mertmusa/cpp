/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cc                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 22:48:49 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/16 23:11:04 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Serializer serikoz;
	Data *ptr;

	std::cout << std::setw(10) << std::right << "Serializer:" << serikoz.serialize(ptr) << std::endl;
}
