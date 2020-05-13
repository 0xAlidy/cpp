/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 20:12:42 by alidy             #+#    #+#             */
/*   Updated: 2020/04/30 17:04:26 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    public:

    Fixed(void);
    Fixed(const int nb);
    Fixed(const float nb);
    Fixed(Fixed const& fixed);
    ~Fixed(void);
    const static Fixed&  min(Fixed const& a, Fixed const& b);
    const static Fixed&  max(Fixed const& a, Fixed const& b);
    Fixed&  operator=(Fixed const& fixed);
    Fixed&  operator++(void);
    Fixed&  operator--(void);
    Fixed   operator++(int);
    Fixed   operator--(int);
    Fixed   operator+(Fixed const& fixed) const;
    Fixed   operator-(Fixed const& fixed) const;
    Fixed   operator*(Fixed const& fixed) const;
    Fixed   operator/(Fixed const& fixed) const;
    bool    operator>(Fixed const& fixed) const;
    bool    operator<(Fixed const& fixed) const;
    bool    operator<=(Fixed const& fixed) const;
    bool    operator>=(Fixed const& fixed) const;
    bool    operator==(Fixed const& fixed) const;
    bool    operator!=(Fixed const& fixed) const;
    int     getRawBits(void) const;
    void    setRawBits(const int raw);
    float   toFloat(void) const;
    int     toInt(void) const;
    
    private:

    int                 _number;
    static const int    _bits = 8;
};

std::ostream& operator<<(std::ostream& os, Fixed const& nb);

#endif
