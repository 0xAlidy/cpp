/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 10:35:19 by alidy             #+#    #+#             */
/*   Updated: 2021/06/09 11:03:23 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

ScalarConversion::ScalarConversion(char *str): _str(str)
{
    _nb = stringToDouble(str);
}

ScalarConversion::~ScalarConversion(void)
{

}

ScalarConversion::ScalarConversion(const ScalarConversion& obj): _str(obj._str), _nb(obj._nb)
{

}

ScalarConversion&   ScalarConversion::operator=(const ScalarConversion& obj)
{
    _str = obj._str;
    _nb = obj._nb;
    return (*this);
}

char*   ScalarConversion::getStr(void) const
{
    return (_str);
}

double  ScalarConversion::getNb(void) const
{
    return (_nb);
}

void    ScalarConversion::setStr(char *str)
{
    _str = str;
}

void    ScalarConversion::setNb(double nb)
{
    _nb = nb;
}

double  ScalarConversion::stringToDouble(const char *str)
{
    return (std::atof(str));
}