/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 13:33:08 by alidy             #+#    #+#             */
/*   Updated: 2021/06/04 15:28:10 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    for(int i = 0; i < 4; i++)
        _stock[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& obj)
{
    for(int i = 0; i < 4; i++)
    {
        if (obj._stock[i])
            _stock[i] = obj._stock[i]->clone();
    }
}

MateriaSource::~MateriaSource(void)
{
    for(int i = 0; i < 4; i++)
    {
        if (_stock[i])
            delete _stock[i];
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& obj)
{
    for(int i = 0; i < 4; i++)
    {
        if (_stock[i])
            delete _stock[i];
    }
    for(int i = 0; i < 4; i++)
    {
        if (obj._stock[i])
            _stock[i] = obj._stock[i]->clone();
    }
    return  (*this);
}

void    MateriaSource::learnMateria(AMateria* obj)
{
    for(int i = 0; i < 4; i++)
    {
        if (_stock[i] == NULL)
        {
            _stock[i] = obj;
            return ;
        }
    }
}

AMateria*   MateriaSource::createMateria(std::string const & type)
{
    for(int i = 0; i < 4; i++)
    {
        if (_stock[i] && _stock[i]->getType() == type)
            return (_stock[i]->clone());
    }
    return (NULL);
}