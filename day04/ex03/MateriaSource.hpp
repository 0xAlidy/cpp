/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 13:31:27 by alidy             #+#    #+#             */
/*   Updated: 2021/06/04 15:21:27 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public:

    MateriaSource(void);
    MateriaSource(const MateriaSource& obj);
    virtual ~MateriaSource(void);
    MateriaSource& operator=(const MateriaSource& obj);
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);

    private:

    AMateria*   _stock[4];
};

#endif
