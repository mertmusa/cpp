/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 02:15:08 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/10 17:12:57 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	/*Animal *d = new Dog();
	Animal *c = new Cat();

	d->makeSound();
	c->makeSound();

	delete c;
	delete d;*/

	//const Animal* meta = new Animal();
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
	//meta->makeSound();
	std::cout<<"---5---"<<std::endl;
	//delete meta;
	std::cout<<"---6---"<<std::endl;
	delete j;
	std::cout<<"---7---"<<std::endl;
	delete i;

	/*std::cout<<"-----v-----"<<std::endl;
	std::cout<<"---WRONG---"<<std::endl;
	std::cout<<"-----v-----"<<std::endl;

	const WrongAnimal* wrongmeta = new WrongAnimal();
	std::cout<<"---8---"<<std::endl;
	const WrongAnimal* g = new WrongCat();
	std::cout << g->getType() << " " << std::endl;
	g->makeSound();
	std::cout<<"---9---"<<std::endl;
	wrongmeta->makeSound();
	std::cout<<"---10--"<<std::endl;
	delete wrongmeta;
	std::cout<<"---11--"<<std::endl;
	delete g;*/

	system("leaks Abstract");
}
