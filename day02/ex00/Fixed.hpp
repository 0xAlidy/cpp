/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 20:12:42 by alidy             #+#    #+#             */
/*   Updated: 2020/04/29 20:50:59 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    public:

    Fixed(void);
    Fixed(Fixed const& fixed);
    ~Fixed(void);
    Fixed&  operator=(Fixed const& fixed);
    int     getRawBits(void) const;
    void    setRawBits(const int raw);
    
    private:

    int                 _number;
    static const int    _bits = 8;
};

#endif
