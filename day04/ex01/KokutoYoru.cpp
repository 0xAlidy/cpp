/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   KokutoYoru.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 15:12:49 by alidy             #+#    #+#             */
/*   Updated: 2021/06/02 15:17:47 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "KokutoYoru.hpp"

KokutoYoru::KokutoYoru(void): AWeapon("KokutoYoru", 10, 100)
{

}

KokutoYoru::KokutoYoru(const KokutoYoru &obj): AWeapon(obj)
{
    
}

KokutoYoru::~KokutoYoru(void)
{
    
}

KokutoYoru &KokutoYoru::operator=(const KokutoYoru &obj)
{
    _name = obj.getName();
    _damage = obj.getDamage();
    _apcost = obj.getAPCost();
    return (*this);
}

void    KokutoYoru::attack(void) const
{
    std::cout << "* SLASH *" << std::endl;
}