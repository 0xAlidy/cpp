/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 09:54:55 by alidy             #+#    #+#             */
/*   Updated: 2020/04/01 14:25:49 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type): _name(name), _type(type){}

Zombie::Zombie(void){}

Zombie::~Zombie(void){}

void        Zombie::set_name(std::string name)
{
    _name = name;
}

void        Zombie::set_type(std::string type)
{
    _type = type;
}

void        Zombie::announce(void)
{
    std::cout << "<" << _name << " (" << _type << ")>";
    std::cout << "  Braiiiiiiinnnssss ..." << std::endl;
}
