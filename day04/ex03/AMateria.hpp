#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
    public:

    AMateria(void);
    AMateria(std::string const & type);
    AMateria(const AMateria& obj);
    virtual ~AMateria(void);
    AMateria& operator=(const AMateria& obj);
    std::string const&  getType(void) const;
    unsigned int        getXP(void) const;
    virtual AMateria*   clone(void) const = 0;
    virtual void        use(ICharacter& target) = 0;

    protected :

    unsigned int    _xp;
    std::string     _type;
};

#endif
