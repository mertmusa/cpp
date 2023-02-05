/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:42:01 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/05 22:52:48 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
	private:
		std::string name;
		ClapTrap::name;
		int hitPoint;
		int energyPoint;
		int attackDamage;
	public:
		void whoAmI();
		void attack(const std::string& target);
		DiamondTrap();
		DiamondTrap(std::string sName);
};
