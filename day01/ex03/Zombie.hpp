/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 09:55:08 by alidy             #+#    #+#             */
/*   Updated: 2020/04/01 14:26:13 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>
# include <cstdlib>

class Zombie
{
    public:

    Zombie(std::string name, std::string type);
    Zombie(void);
    ~Zombie(void);
    void        announce(void);
    void        set_name(std::string name);
    void        set_type(std::string type);

    private:
    
    std::string _name;
    std::string _type;
};

#endif
