/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 13:00:15 by alidy             #+#    #+#             */
/*   Updated: 2021/06/04 13:57:37 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name): _name(name)
{
    for(int i = 0; i < SLOTS; i++)
        _inventory[i] = NULL;
}

Character::Character(const Character& obj): _name(obj._name)
{
    for(int i = 0; i < SLOTS; i++)
    {
        if (obj._inventory[i])
            _inventory[i] = obj._inventory[i]->clone();
    }
}

Character::~Character(void)
{
    for(int i = 0; i < SLOTS; i++)
    {
        if (_inventory[i])
            delete _inventory[i];
    }
}

Character& Character::operator=(const Character& obj)
{
    _name = obj._name;
    for(int i = 0; i < SLOTS; i++)
    {
        if (_inventory[i])
            delete _inventory[i];
    }
    for(int i = 0; i < SLOTS; i++)
    {
        if (obj._inventory[i])
            _inventory[i] = obj._inventory[i]->clone();
    }
    return  (*this);
}

std::string const & Character::getName(void) const
{
    return (_name);
}

void Character::equip(AMateria* m)
{
    for(int i = 0; i < SLOTS; i++)
    {
        if (_inventory[i] == NULL)
        {
            _inventory[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= SLOTS)
        return ;
    _inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= SLOTS)
        return ;
    if (_inventory[idx])
        _inventory[idx]->use(target);
}