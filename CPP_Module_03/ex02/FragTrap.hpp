/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:32:24 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/05 18:00:51 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	void highFivesGuys(void);
	FragTrap();
	FragTrap(std::string sName);
	FragTrap(const FragTrap& stcopy);
	FragTrap& operator = (const FragTrap& stcopy);
	~FragTrap();
};

#endif
