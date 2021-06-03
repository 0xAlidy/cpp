#include "Squad.hpp"

Squad::Squad(void): _count(0), _squad(NULL)
{

}

Squad::Squad(const Squad &obj): _count(obj._count)
{
    for (int i = 0; i < obj._count; i++)
        this->push(obj.getUnit(i)->clone());
}

Squad::~Squad(void)
{
    t_squad *temp;

    while (_squad)
    {
        temp = _squad
        _squad = _squad->next;
        delete temp->unit;
        delete temp;
    }
}

Squad& Squad::operator=(const Squad &obj)
{
    t_squad *temp;

    while (_squad)
    {
        temp = _squad
        _squad = _squad->next;
        delete temp->unit;
        delete temp;
    }
    _squad = NULL;
    for (int i = 0; i < obj._count; i++)
        this->push(obj.getUnit(i)->clone());
    _count = obj._count;
    return (*this);
}

int Squad::getCount(void) const
{
    return (_count);
}

ISpaceMarine*   Squad::getUnit(int num) const
{
    t_squad *temp = _squad;

    if (num >= _count || num < 0)
        return (NULL);
    for(int i = 0; i <= num; i++)
        temp = temp->next;
    return (temp->unit);
}

int Squad::push(ISpaceMarine *obj)
{
    t_squad *temp = _squad;
    if (obj == NULL)
        return (_count);
    if (temp)
    {
        while (temp->next)
        {
            if (temp->unit == obj)
                return (_count);
            temp = temp->next;
        }
    }
    temp = new t_squad;
    temp->unit = obj;
    temp->next = NULL;
    _count++;
    return (_count);
}