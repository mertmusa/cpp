/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 02:37:35 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/13 02:39:24 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(const std::string sTarget);
		PresidentialPardonForm(const PresidentialPardonForm &rcopy);
		PresidentialPardonForm operator=(const PresidentialPardonForm &rcopy);
		~PresidentialPardonForm();

		//

		void execute(Bureaucrat const &executor) const;
};

#endif
