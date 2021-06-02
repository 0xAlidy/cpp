/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mihawk.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 15:02:10 by alidy             #+#    #+#             */
/*   Updated: 2021/06/02 15:05:11 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Mihawk.hpp"

Mihawk::Mihawk(void): Enemy(200, "Mihawk")
{
    std::cout << "私の名前はミホークです" << std::endl;
}

Mihawk::Mihawk(const Mihawk &obj): Enemy(obj)
{
    std::cout << "私の名前はミホークです" << std::endl;
}

Mihawk::~Mihawk(void)
{
    std::cout << "我々は敗北した..." << std::endl;
}

Mihawk &Mihawk::operator=(const Mihawk &obj)
{
    _type = obj.getType();
    _hp = obj.getHP();
    return (*this);
}