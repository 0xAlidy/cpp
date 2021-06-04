/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 12:55:32 by alidy             #+#    #+#             */
/*   Updated: 2021/06/04 15:15:59 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"
# define SLOTS 4

class Character : public ICharacter
{
    public:

    Character(void);
    Character(std::string name);
    Character(const Character& obj);
    virtual ~Character(void);
    Character& operator=(const Character& obj);
    std::string const & getName(void) const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);

    private:

    std::string _name;
    AMateria*   _inventory[SLOTS];
};

#endif