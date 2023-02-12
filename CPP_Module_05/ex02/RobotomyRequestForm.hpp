/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 01:48:39 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/13 02:26:31 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>
//#include <time.h>

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(const std::string sTarget);
		RobotomyRequestForm(const RobotomyRequestForm &rcopy);
		RobotomyRequestForm operator=(const RobotomyRequestForm &rcopy);
		~RobotomyRequestForm();

		//

		void execute(Bureaucrat const &executor) const;
};

#endif
