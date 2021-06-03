#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &obj)
{
    (void)obj;
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine(void)
{
    std::cout << "Aaargh..." << std::endl;
}

TacticalMarine& TacticalMarine::operator=(const TacticalMarine &obj)
{
    (void)obj;
    return (*this);
}

ISpaceMarine*   TacticalMarine::clone(void) const
{
    return (new TacticalMarine());
}

void    TacticalMarine::battleCry(void) const
{
    std::cout << "For the holy PLOT!" << std::endl;
}

void    TacticalMarine::rangedAttack(void) const
{
    std::cout << "* attacks with a bolter *" << std::endl;
}

void    TacticalMarine::meleeAttack(void) const
{
    std::cout << "* attacks with a chainsword *" << std::endl;
}