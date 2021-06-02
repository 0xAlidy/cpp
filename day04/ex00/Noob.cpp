/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Noob.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 17:11:07 by alidy             #+#    #+#             */
/*   Updated: 2021/06/02 12:27:13 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Noob.hpp"

Noob::Noob(std::string name): Victim(name)
{
    std::cout << "A newbie appears!" << std::endl;
}

Noob::Noob(const Noob &obj): Victim(obj)
{
    std::cout << "A newbie appears!" << std::endl;
}

Noob::~Noob(void)
{
    std::cout << "GG WP!" << std::endl;
}

Noob&   Noob::operator=(const Noob &obj)
{
    _name = obj.getName();
    return (*this);
}

void    Noob::getPolymorphed(void) const
{
    std::cout << _name << " has been turned into a master!" << std::endl;
}

std::ostream    &operator<<(std::ostream &os, const Noob &obj)
{
    os << "I am " << obj.getName() << ", and i love my computer!" << std::endl;
    return (os);
}