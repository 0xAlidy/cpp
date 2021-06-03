#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"
# include <iostream>

class AssaultTerminator : public ISpaceMarine
{
    public:
    
    AssaultTerminator(void);
    AssaultTerminator(const AssaultTerminator &obj);
    virtual ~AssaultTerminator(void);
    AssaultTerminator& operator=(const AssaultTerminator &obj);
    ISpaceMarine*   clone(void) const;
    void            battleCry(void) const;
    void            rangedAttack(void) const;
    void            meleeAttack(void) const;
};

#endif