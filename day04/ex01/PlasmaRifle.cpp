/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifleRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 18:35:50 by alidy             #+#    #+#             */
/*   Updated: 2021/06/01 18:35:50 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void): AWeapon("PlasmaRifle", 5, 21)
{

}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &obj): AWeapon(obj)
{
    
}

PlasmaRifle::~PlasmaRifle(void)
{
    
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &obj)
{
    _name = obj.getName();
    _damage = obj.getDamage();
    _apcost = obj.getAPCost();
    return (*this);
}

void    PlasmaRifle::attack(void) const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}