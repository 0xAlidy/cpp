/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 13:03:44 by alidy             #+#    #+#             */
/*   Updated: 2021/05/31 15:47:47 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include <iostream>
# include <stdlib.h>
# include <time.h>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:

    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(FragTrap const& obj, std::string name);
    ~FragTrap(void);
    FragTrap&   operator=(FragTrap const& obj);
    void        vaulthunter_dot_exe(std::string const& target);
    void        randomAttack(std::string const& target);
    void        foamSword(std::string const& target);
    void        Bazooka(std::string const& target);
    void        sheep(std::string const& target);
    void        bullying(std::string const& target);
    void        shoes(std::string const& target);
};

#endif