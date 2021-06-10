/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 17:27:22 by alidy             #+#    #+#             */
/*   Updated: 2021/06/07 17:54:43 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string target): Form("PresidentialPardonForm", 25, 5), _target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj): Form(obj), _target(obj._target)
{

}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    
}

void    PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
    int i = std::rand() % 2;
    if (executor.getGrade() > this->getExecGrade())
        throw Bureaucrat::GradeTooLowException();
    else if (this->getIsSign() == false)
        throw NotSigned();
	std::cout << _target << " was forgiven by Zafod Beeblebrox !" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
    (void)obj;
    return (*this);
}