/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 19:24:26 by mtemel            #+#    #+#             */
/*   Updated: 2023/01/24 22:49:10 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
	private:
		std::string name;
	public:
		void announce(void);
		Zombie* newZombie( std::string name );
		void randomChump(std::string name);
	~Zombie()
	{
		std::cout<<name<<" destructor!"<<std::endl;
	}
};

#endif
