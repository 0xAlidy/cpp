/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 13:03:44 by alidy             #+#    #+#             */
/*   Updated: 2020/05/04 17:10:54 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
    public:

    NinjaTrap(std::string name);
    NinjaTrap(NinjaTrap const& obj, std::string name);
    ~NinjaTrap(void);
    void    ninjaShoeBox(ClapTrap &target);
    void    ninjaShoeBox(FragTrap &target);
    void    ninjaShoeBox(ScavTrap &target);
    void    ninjaShoeBox(NinjaTrap &target);
};

#endif