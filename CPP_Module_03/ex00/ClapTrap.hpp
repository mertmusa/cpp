/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 19:53:31 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/03 20:11:33 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
	private:
		std::string Name;
		int hitPoints = 10;
		int energyPoints = 10;
		int attackDamage = 0;
	public:
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		ClapTrap(std::string sName);
		ClapTrap(const ClapTrap& ctcopy);
		ClapTrap& operator = (const ClapTrap& ctcopy);
		~ClapTrap(void);
		void setName(std::string const sName);
		std::string getName(void);
}

#endif