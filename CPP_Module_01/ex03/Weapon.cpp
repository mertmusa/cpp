/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 21:12:05 by mtemel            #+#    #+#             */
/*   Updated: 2023/01/27 18:14:32 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void Weapon::setType(std::string typeP){
			this->type = typeP;
		}

const std::string Weapon::getType(){
	const std::string& typeR = this->type;
	return (typeR);
	//return (this->type);
}

Weapon::Weapon(std::string typeP){
	setType(typeP);
}
