/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 15:32:58 by alidy             #+#    #+#             */
/*   Updated: 2020/04/01 16:31:38 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type){}

Weapon::Weapon(void){}

Weapon::~Weapon(void){}

const std::string   &Weapon::getType(void) const
{
    return (_type);
}

void                Weapon::setType(std::string type)
{
    _type = type;
}
