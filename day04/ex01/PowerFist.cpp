/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 10:37:29 by alidy             #+#    #+#             */
/*   Updated: 2021/06/02 14:51:54 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void): AWeapon("PowerFist", 8, 50)
{

}

PowerFist::PowerFist(const PowerFist &obj): AWeapon(obj)
{
    
}

PowerFist::~PowerFist(void)
{
    
}

PowerFist   &PowerFist::operator=(const PowerFist &obj)
{
    _name = obj.getName();
    _damage = obj.getDamage();
    _apcost = obj.getAPCost();
    return (*this);
}

void    PowerFist::attack(void) const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}