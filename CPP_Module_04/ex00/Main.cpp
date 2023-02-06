/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 02:15:08 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/06 03:16:15 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal animal;
	Cat cat;
	//Animal *animal=&cat;
	Dog dog;

	//animal->makeSound();
	animal.makeSound();
	cat.makeSound();
	dog.makeSound();

	return (0);
}
