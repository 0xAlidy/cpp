/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 15:42:29 by alidy             #+#    #+#             */
/*   Updated: 2020/04/01 16:27:39 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
    public:

    Weapon(void);
    Weapon(std::string type);
    ~Weapon(void);
    const std::string   &getType(void) const;
    void                setType(std::string type);
    
    private:

    std::string         _type;  
};

#endif