/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 13:03:44 by alidy             #+#    #+#             */
/*   Updated: 2021/05/31 16:16:23 by alidy            ###   ########lyon.fr   */
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

    NinjaTrap(void);
    NinjaTrap(std::string name);
    NinjaTrap(NinjaTrap const& obj, std::string name);
    ~NinjaTrap(void);
    NinjaTrap&  operator=(NinjaTrap const& obj);
    void        ninjaShoeBox(ClapTrap &target);
    void        ninjaShoeBox(FragTrap &target);
    void        ninjaShoeBox(ScavTrap &target);
    void        ninjaShoeBox(NinjaTrap &target);
};

#endif