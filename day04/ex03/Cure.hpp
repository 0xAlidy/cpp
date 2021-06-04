#ifndef CURE.HPP
# define CURE.HPP
# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
    public:

    Cure(void);
    Cure(const Cure& obj);
    virtual ~Cure(void);
    Cure& operator=(const Cure& obj);
    Cure*    clone(void) const;
    void    use(ICharacter& target);
};

#endif