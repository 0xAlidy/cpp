/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 16:13:55 by alidy             #+#    #+#             */
/*   Updated: 2021/06/01 17:06:16 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name): Victim(name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &obj): Victim(obj)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(void)
{
    std::cout << "Bleuark..." << std::endl;
}

Peon&   Peon::operator=(const Peon &obj)
{
    _name = obj.getName();
    return (*this);
}

void    Peon::getPolymorphed(void) const
{
    std::cout << _name << " has been turned into a pink pony!" << std::endl;
}
