/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 14:48:00 by alidy             #+#    #+#             */
/*   Updated: 2021/06/01 17:05:54 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title): _name(name), _title(title)
{
    std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &obj): _name(obj.getName()), _title(obj.getTitle())
{
    std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
    std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer&   Sorcerer::operator=(const Sorcerer &obj)
{
    _name = obj.getName();
    _title = obj.getTitle();
    return (*this);
}

std::string Sorcerer::getName(void) const
{
    return (_name);
}

std::string Sorcerer::getTitle(void) const
{
    return (_title);
}

void    Sorcerer::polymorph(const Victim &target) const
{
    target.getPolymorphed();
}

std::ostream    &operator<<(std::ostream &os, const Sorcerer &obj)
{
    os << "I am " << obj.getName() << ", " << obj.getTitle() << ", and i like ponies!" << std::endl;
    return (os);
}
