/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:31:06 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/04 17:42:17 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		void guardGate();
		void attack(const std::string& target);
		ScavTrap();
		ScavTrap(std::string sName);
		ScavTrap(const ScavTrap& stcopy);
		ScavTrap& operator = (const ScavTrap& stcopy);
		~ScavTrap();
};

#endif