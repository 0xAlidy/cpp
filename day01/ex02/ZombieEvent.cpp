/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/31 11:22:00 by alidy             #+#    #+#             */
/*   Updated: 2020/04/01 14:26:47 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void){}

ZombieEvent::~ZombieEvent(void){}

void    ZombieEvent::set_zombieType(std::string type)
{
    _type = type;
}

Zombie  *ZombieEvent::newZombie(std::string name)
{
    return (new Zombie(name, _type));
}

Zombie  *ZombieEvent::randomChump(void)
{
    Zombie      *zombie;
    std::string names[] = {"Franck",  "Jack", "Freddy", "Harry", "Esther"};
    std::string name;

    if (_type.compare("") == 0)
        set_zombieType("walker");
    name = names[rand() % 5];
    zombie = newZombie(name);
    return (zombie);
}
