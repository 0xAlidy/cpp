/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/31 11:09:12 by alidy             #+#    #+#             */
/*   Updated: 2021/05/26 16:23:41 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type): _name(name), _type(type){}

Zombie::~Zombie(void){}

void        Zombie::announce(void)
{
    std::cout << "<" << _name << " (" << _type << ")>";
    std::cout << "  Braiiiiiiinnnssss ..." << std::endl;
}
