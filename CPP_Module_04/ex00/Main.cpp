/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 02:15:08 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/06 03:29:14 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	/*Animal animal;
	Cat cat;
	//Animal *animal=&cat;
	Dog dog;

	//animal->makeSound();
	animal.makeSound();
	cat.makeSound();
	dog.makeSound();*/

	const Animal* meta = new Animal();
	std::cout<<"---1---"<<std::endl;
	const Animal* j = new Dog();
	std::cout<<"---2---"<<std::endl;
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	std::cout<<"---3---"<<std::endl;
	j->makeSound();
	std::cout<<"---4---"<<std::endl;
	meta->makeSound();
	std::cout<<"---5---"<<std::endl;
	delete meta;
	std::cout<<"---6---"<<std::endl;
	delete j;
	std::cout<<"---7---"<<std::endl;
	delete i;

	return (0);
}
