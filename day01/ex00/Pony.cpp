/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 14:48:16 by alidy             #+#    #+#             */
/*   Updated: 2020/03/31 11:39:06 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, int age, std::string color): _name(name), _age(age), _color(color){}

Pony::~Pony(void){}

std::string Pony::get_name(void)
{
    return (_name);
}

int         Pony::get_age(void)
{
    return (_age);
}

std::string Pony::get_color(void)
{
    return (_color);
}
