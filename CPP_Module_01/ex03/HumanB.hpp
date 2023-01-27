/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:50:03 by mtemel            #+#    #+#             */
/*   Updated: 2023/01/27 18:27:15 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB{
	private:
		std::string name;
		Weapon* WeaponB;
	public:
		HumanB(std::string name);
		void	setWeapon(Weapon& WeaponP);
		void	attack();
};
