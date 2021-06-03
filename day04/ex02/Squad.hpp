#ifndef SQUAD_HPP
# define SQUAD_HPP
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"
# include <iostream>

typedef struct      s_squad
{
    ISpaceMarine    *unit;
    struct s_squad  *next;
}                   t_squad;

class Squad : public ISquad
{
    public:
    
    Squad(void);
    Squad(const Squad &obj);
    virtual ~Squad(void);
    Squad& operator=(const Squad &obj);
    int             getCount(void) const;
    ISpaceMarine*   getUnit(int) const;
    int             push(ISpaceMarine*);

    private:

    int     _count;
    t_squad *_squad;
};

#endif