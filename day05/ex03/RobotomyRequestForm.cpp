/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 17:17:54 by alidy             #+#    #+#             */
/*   Updated: 2021/06/07 17:46:10 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target): Form("RobotomyRequestForm", 72, 45), _target(target)
{
    std::srand(std::time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj): Form(obj), _target(obj._target)
{
    std::srand(std::time(NULL));
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    
}

void    RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
    int i = std::rand() % 2;
    if (executor.getGrade() > this->getExecGrade())
        throw Bureaucrat::GradeTooLowException();
    else if (this->getIsSign() == false)
        throw NotSigned();
	if (i == 1)
	{
		std::cout << "BRRRR BRRRR BRRRR !!!" << std::endl;
		std::cout << _target << " has been robotomized." << std::endl;
	}
	else
	{
		std::cout << _target << " robotomization failed !" << std::endl;
	}
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
    (void)obj;
    return (*this);
}