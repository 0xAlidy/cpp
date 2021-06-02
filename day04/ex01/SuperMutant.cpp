/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:11:58 by alidy             #+#    #+#             */
/*   Updated: 2021/06/02 14:51:34 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void): Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &obj): Enemy(obj)
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant(void)
{
    std::cout << "Aaargh..." << std::endl;
}

SuperMutant &SuperMutant::operator=(const SuperMutant &obj)
{
    _type = obj.getType();
    _hp = obj.getHP();
    return (*this);
}

void    SuperMutant::takeDamage(int damage)
{
    damage -= 3;
    if (damage < 1)
        return ;
    if (damage > _hp)
        _hp = 0;
    else
        _hp -= damage;
}
