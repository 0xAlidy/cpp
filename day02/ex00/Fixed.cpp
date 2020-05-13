/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 20:36:45 by alidy             #+#    #+#             */
/*   Updated: 2020/05/01 15:20:32 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _number(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& fixed): _number(fixed.getRawBits())
{
   std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed&  Fixed::operator=(Fixed const& fixed)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &fixed)
    {
        _number = fixed.getRawBits();
    }
    return (*this);
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (_number);
}

void    Fixed::setRawBits(const int raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    _number = raw;
}