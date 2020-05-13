/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 14:48:20 by alidy             #+#    #+#             */
/*   Updated: 2020/03/31 11:39:48 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <string>
# include <iostream>

class Pony
{
    public:
    
    Pony(std::string name, int age, std::string color);
    ~Pony(void);
    std::string get_name(void);
    std::string get_color(void);
    int         get_age(void);

    private:

    std::string _name;
    std::string _color;
    int         _age;
};

#endif 