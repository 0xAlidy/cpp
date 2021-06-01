/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 15:30:35 by alidy             #+#    #+#             */
/*   Updated: 2021/06/01 16:07:27 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name): _name(name)
{
    std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &obj): _name(obj.getName())
{
    std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::~Victim(void)
{
    std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

Victim&   Victim::operator=(const Victim &obj)
{
    _name = obj.getName();
    return (*this);
}

std::string Victim::getName(void) const
{
    return (_name);
}

void    Victim::getPolymorphed(void) const
{
    std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream    &operator<<(std::ostream &os, const Victim &obj)
{
    os << "I'm " << obj.getName() << " and i like otters!" << std::endl;
    return (os);
}
