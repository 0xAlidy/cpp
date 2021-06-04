#include "AMateria.hpp"

AMateria::AMateria(std::string const & type): _type(type), _xp(0)
{

}

AMateria::AMateria(const AMateria& obj): _type(obj._type), _xp(obj._xp)
{

}

AMateria::~AMateria(void)
{

}

AMateria& AMateria::operator=(const AMateria& obj)
{
    _xp = obj._xp;
    return (*this);
}

std::string const&  AMateria::getType(void) const
{
    return (_type);
}

unsigned int        AMateria::getXP(void) const
{
    return (_xp);
}
