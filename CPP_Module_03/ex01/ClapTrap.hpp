/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 19:53:31 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/05 00:04:54 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
	private:
		std::string Name;
		int hitPoints;
		int energyPoints;
		int attackDamage;
	public:
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		ClapTrap();
		ClapTrap(std::string sName);
		ClapTrap(const ClapTrap& clapcopy);
		ClapTrap& operator = (const ClapTrap& clapcopy);
		virtual ~ClapTrap(void);
		std::string getName(void) const;
		int	getHit(void) const;
		int	getEnergy(void) const;
		int	getAttack(void) const;
		void setName(std::string sName);
		void setEnergy(const int rEnergy);
		void setHit(const int nHit);
		void setAttack(const int nAttack);
};

#endif
