/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 20:04:41 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/10 20:19:10 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Form
{
private:
	const std::string name;
	bool isSigned;
	const int reqSign;
	const int reqExe;
public:
	Form();
	~Form();
};

Form::Form(/* args */)
{
}

Form::~Form()
{
}


#endif