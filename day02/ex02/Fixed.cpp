/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 20:36:45 by alidy             #+#    #+#             */
/*   Updated: 2020/05/01 15:21:14 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _number(0){}

Fixed::Fixed(Fixed const& fixed): _number(fixed.getRawBits()){}

Fixed::Fixed(const int nb)
{

    _number = nb << _bits;
}

Fixed::Fixed(const float nb)
{
    _number = (int)roundf(nb * (1 << _bits)); 
}

Fixed::~Fixed(void){}

const Fixed&  Fixed::min(Fixed const& a, Fixed const& b)
{
    return (a < b ? a : b);
}

const Fixed&  Fixed::max(Fixed const& a, Fixed const& b)
{
    return (a > b ? a : b);
}

Fixed&  Fixed::operator=(Fixed const& fixed)
{
    if (this != &fixed)
    {
        _number = fixed.getRawBits();
    }
    return (*this);
}

Fixed& Fixed::operator++(void)
{
   _number++;
   return *this;
}

Fixed& Fixed::operator--(void)
{
   _number--;
   return *this;
}

Fixed   Fixed::operator++(int)
{
    Fixed temp(*this);
    ++(*this);
    return temp;
}

Fixed   Fixed::operator--(int)
{
    Fixed temp(*this);
    --(*this);
    return temp;
}

Fixed   Fixed::operator+(Fixed const& fixed) const
{
    return (_number + fixed.getRawBits());
}

Fixed   Fixed::operator-(Fixed const& fixed) const
{
    return (_number - fixed.getRawBits());
}

Fixed   Fixed::operator*(Fixed const& fixed) const
{
    return (this->toFloat() * fixed.toFloat());
}

Fixed   Fixed::operator/(Fixed const& fixed) const
{
    return (this->toFloat() / fixed.toFloat());
}

bool    Fixed::operator>(Fixed const& fixed) const
{
    return (_number > fixed.getRawBits());
}

bool    Fixed::operator<(Fixed const& fixed) const
{
    return (_number < fixed.getRawBits());
}

bool    Fixed::operator<=(Fixed const& fixed) const
{
    return (_number <= fixed.getRawBits());
}

bool    Fixed::operator>=(Fixed const& fixed) const
{
    return (_number >= fixed.getRawBits());
}

bool    Fixed::operator==(Fixed const& fixed) const
{
    return (_number == fixed.getRawBits());
}

bool    Fixed::operator!=(Fixed const& fixed) const
{
    return (_number != fixed.getRawBits());
}

std::ostream& operator<<(std::ostream& os, Fixed const& nb)
{
    os << nb.toFloat();
    return os;
}

int     Fixed::getRawBits(void) const
{
    return (_number);
}

void    Fixed::setRawBits(const int raw)
{
    _number = raw;
}

int     Fixed::toInt(void) const
{
    return (_number >> _bits);
}

float   Fixed::toFloat(void) const
{
    return (_number / (float)(1 << _bits));
}