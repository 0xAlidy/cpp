/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 10:49:42 by alidy             #+#    #+#             */
/*   Updated: 2021/06/07 11:08:55 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, const std::string &type): _hp(hp), _type(type)
{

}

Enemy::Enemy(const Enemy &obj): _hp(obj.getHP()), _type(obj.getType())
{
    
}

Enemy::~Enemy(void)
{
    
}

Enemy   &Enemy::operator=(const Enemy &obj)
{
    _type = obj.getType();
    _hp = obj.getHP();
    return (*this);
}

int Enemy::getHP(void) const
{
    return (_hp);
}

const std::string   Enemy::getType(void) const
{
    return (_type);
}

void    Enemy::takeDamage(int damage)
{
    if (damage < 1)
        return ;
    if (damage > _hp)
        damage = _hp;
    _hp -= damage;
}