#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"
# include <iostream>

class TacticalMarine : public ISpaceMarine
{
    public:
    
    TacticalMarine(void);
    TacticalMarine(const TacticalMarine &obj);
    virtual ~TacticalMarine(void);
    TacticalMarine &operator=(const TacticalMarine &obj);
    ISpaceMarine*   clone(void) const;
    void            battleCry(void) const;
    void            rangedAttack(void) const;
    void            meleeAttack(void) const;
};

#endif