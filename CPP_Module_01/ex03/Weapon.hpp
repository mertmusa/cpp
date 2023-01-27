/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 20:01:37 by mtemel            #+#    #+#             */
/*   Updated: 2023/01/27 17:57:24 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon{
	private:
		std::string type;
	public:
		void setType(std::string typeP);
		const std::string getType();
		Weapon(std::string typeP);
};

#endif
