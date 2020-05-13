/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 14:10:54 by alidy             #+#    #+#             */
/*   Updated: 2020/04/01 15:03:38 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void){}

Brain::~Brain(void){}

std::string Brain::identify(void) const
{
    std::stringstream   temp;

    temp << this;
    return (temp.str());
}
