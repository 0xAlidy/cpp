/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 10:31:22 by alidy             #+#    #+#             */
/*   Updated: 2021/06/12 11:40:21 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERSION_HPP
# define SCALARCONVERSION_HPP
# include <cstdlib>
# include <iostream>

class ScalarConversion
{
    public:
    
    // Coplien
    ScalarConversion(void);
    ScalarConversion(char *str);
    ~ScalarConversion(void);
    ScalarConversion(const ScalarConversion& obj);
    ScalarConversion& operator=(const ScalarConversion& obj);

    // Getter
    char            *getStr(void) const;
    double          getNb(void) const;

    // Setter
    void            setStr(char *str);
    void            setNb(double nb);
    
    // Methods
    double          stringToDouble(const char *str);

    private:

    char        *_str;
    double      _nb;
};

#endif