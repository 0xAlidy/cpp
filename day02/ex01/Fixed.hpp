/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 20:12:42 by alidy             #+#    #+#             */
/*   Updated: 2020/04/29 22:11:20 by alidy            ###   ########lyon.fr   */
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
    Fixed&  operator=(Fixed const& fixed);
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
