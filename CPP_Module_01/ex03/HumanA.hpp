/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 20:26:28 by mtemel            #+#    #+#             */
/*   Updated: 2023/01/27 18:18:33 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
	private:
		std::string name;
		Weapon* WeaponA;
	public:
		//HumanA();
		HumanA(std::string name, Weapon& WeaponP);
		void attack();
};

#endif
