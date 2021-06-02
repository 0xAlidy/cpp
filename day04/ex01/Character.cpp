/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:28:53 by alidy             #+#    #+#             */
/*   Updated: 2021/06/02 14:54:47 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string &name): _name(name), _ap(40), _weapon(NULL)
{

}

Character::Character(const Character &obj): _name(obj._name), _ap(obj._ap), _weapon(obj._weapon)
{
    
}

Character::~Character(void)
{

}

Character   &Character::operator=(const Character &obj)
{
    _name = obj._name;
    _ap = obj._ap;
    _weapon = obj._weapon;
    return (*this);
}

const std::string   Character::getName(void) const
{
    return (_name);
}

int Character::getAP(void) const
{
    return (_ap);
}

AWeapon *Character::getWeapon(void) const
{
    return (_weapon);
}

void    Character::recoverAP(void)
{
    _ap += 10;
    if (_ap > 40)
        _ap = 40;
}

void    Character::equip(AWeapon *weapon)
{
    _weapon = weapon;
}

void    Character::attack(Enemy *enemy)
{
    if (!enemy || !_weapon)
        return ;
    if (_ap >= _weapon->getAPCost())
    {
        std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
        _ap -= _weapon->getAPCost();
        _weapon->attack();
        enemy->takeDamage(_weapon->getDamage());
        if (enemy->getHP() == 0)
            delete enemy;
    }
    else
        std::cout << "Not enough action points to launch the attack!" << std::endl;
}

std::ostream    &operator<<(std::ostream &os, const Character &obj)
{
    if (obj.getWeapon())
        os << obj.getName() << " has " << obj.getAP() << " AP and wields a " << obj.getWeapon()->getName() << std::endl;
    else
        os << obj.getName() << " has " << obj.getAP() << " AP and is unarmed" << std::endl; 
    return (os);
}