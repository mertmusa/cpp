/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 22:34:36 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/16 23:08:24 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

typedef struct s_data
{
	int i;
	char *cp;
	std::string str;
	long l;
	float f;
	double d;
}Data;

class Serializer
{
	private:
		//static Data *ptr;
		//static uintptr_t raw;
	public:
		Serializer();
		Serializer(const Serializer &scopy);
		Serializer operator = (const Serializer &scopy);
		~Serializer();

		//static Data* getDataAddress();

		//static class - only static members and attributes

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};
