/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 14:10:54 by alidy             #+#    #+#             */
/*   Updated: 2021/05/26 16:50:44 by alidy            ###   ########lyon.fr   */
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
