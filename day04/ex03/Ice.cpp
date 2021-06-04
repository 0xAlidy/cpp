#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{

}

Ice::Ice(const Ice& obj): AMateria(obj)
{

}

Ice::~Ice(void)
{

}

Ice& Ice::operator=(const Ice& obj)
{
    _xp = obj._xp;
    return (*this);
}

Ice*    Ice::clone(void) const
{
    return (new Ice(*this));
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    _xp += 10;
}