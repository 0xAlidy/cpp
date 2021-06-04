#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{

}

Cure::Cure(const Cure& obj): AMateria(obj)
{

}

Cure::~Cure(void)
{

}

Cure& Cure::operator=(const Cure& obj)
{
    _xp = obj._xp;
    return (*this);
}

Cure*    Cure::clone(void) const
{
    return (new Cure(*this));
}

void    Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
    _xp += 10;
}