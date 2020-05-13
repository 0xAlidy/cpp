/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 14:23:53 by alidy             #+#    #+#             */
/*   Updated: 2020/04/01 15:16:22 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void){}

Human::~Human(void){}

std::string     Human::identify(void) const
{
    return (_brain.identify());
}

const Brain     &Human::getBrain(void) const
{
    return (_brain);
}