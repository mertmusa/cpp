/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 20:34:32 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/13 00:31:21 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>
#include <string>

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm(const std::string sTarget);
		ShrubberyCreationForm(const ShrubberyCreationForm &scopy);
		ShrubberyCreationForm operator=(const ShrubberyCreationForm &scopy);
		~ShrubberyCreationForm();

		//

		void execute(Bureaucrat const & executor) const;
};

#endif
