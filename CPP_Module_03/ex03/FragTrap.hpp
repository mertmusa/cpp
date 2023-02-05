/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:32:24 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/05 22:32:23 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		void highFivesGuys(void);
		FragTrap();
		FragTrap(std::string sName);
		FragTrap(const FragTrap& ftcopy);
		FragTrap& operator = (const FragTrap& ftcopy);
		~FragTrap();
};

#endif
