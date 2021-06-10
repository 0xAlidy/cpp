/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 10:59:30 by alidy             #+#    #+#             */
/*   Updated: 2021/06/08 12:56:54 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
    
}

Intern::Intern(const Intern& obj)
{
    (void)obj;
}

Intern::~Intern(void)
{

}

Intern&    Intern::operator=(const Intern& obj)
{
    (void)obj; 
    return(*this);
}

Form*   Intern::createPresidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form*   Intern::createRobotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form*   Intern::createShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form*   Intern::makeForm(std::string name, std::string target)
{
	Form	*(Intern::*ptr[])(std::string target) =
	{
		&Intern::createPresidential,
		&Intern::createRobotomy,
		&Intern::createShrubbery,
	};
	std::string		_name[] =
	{
		"presidential pardon",
		"robotomy request",
		"shruberry creation"
	};
	for (int i = 0; i < 3; i++)
	{
		if (name == _name[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			return (this->*ptr[i])(target);
		}
	}
	throw FormDontExist();
	return NULL;
}

const char* Intern::FormDontExist::what() const throw()
{
	return ("Error form dont exist");
}