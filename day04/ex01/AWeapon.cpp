/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 18:12:01 by alidy             #+#    #+#             */
/*   Updated: 2021/06/02 14:44:18 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string &name, int apcost, int damage): _name(name), _apcost(apcost), _damage(damage)
{

}

AWeapon::AWeapon(const AWeapon &obj): _name(obj.getName()), _apcost(obj.getAPCost()), _damage(obj.getDamage())
{
    
}

AWeapon::~AWeapon(void)
{
    
}

AWeapon &AWeapon::operator=(const AWeapon &obj)
{
    _name = obj.getName();
    _damage = obj.getDamage();
    _apcost = obj.getAPCost();
    return (*this);
}

const std::string AWeapon::getName(void) const
{
    return (_name);
}

int AWeapon::getDamage(void) const
{
    return (_damage);
}

int AWeapon::getAPCost(void) const
{
    return (_apcost);
}
