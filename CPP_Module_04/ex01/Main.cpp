/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 02:15:08 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/06 23:48:03 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{

	/*const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;*/

	const Animal* d[4];
	//const Animal* c[10];

	int i = 0;
	while (i < 4)
	{
		if (i%2)
			d[i++] = new Cat();
		else
			d[i++] = new Dog();
	}
	/*while (i < 10)
		delete c[i++];*/
	i = 0;
	while (i < 4)
		delete d[i++];

	return (0);
}
