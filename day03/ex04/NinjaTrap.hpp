/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 13:03:44 by alidy             #+#    #+#             */
/*   Updated: 2020/05/18 09:21:14 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap
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