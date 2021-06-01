/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 14:49:13 by alidy             #+#    #+#             */
/*   Updated: 2021/06/01 18:04:42 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
    public:

    Sorcerer(void);
    Sorcerer(std::string name, std::string title);
    Sorcerer(const Sorcerer &obj);
    ~Sorcerer(void);
    Sorcerer    &operator=(const Sorcerer &obj);
    std::string getName(void) const;
    std::string getTitle(void) const;
    void        polymorph(const Victim &target) const;

    private:

    std::string _name;
    std::string _title;
};

std::ostream    &operator<<(std::ostream &os, const Sorcerer &obj);

#endif
