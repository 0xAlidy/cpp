#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>

template < typename T >
class MutantStack: public std::stack<T>
{

    public:

	MutantStack(void) { }
	virtual ~MutantStack(void) { }
	MutantStack(const MutantStack& obj): _mutant(obj._mutant) { }
	MutantStack & operator=(const MutantStack& obj)
    {
		_mutant = obj._mutant;
		return (*this);
	}

	typedef typename std::list<T>::iterator iterator;

	iterator    begin(void) { return _mutant.begin(); }
	iterator    end(void) { return _mutant.end(); }
	bool        empty(void) { return _mutant.empty(); }
	size_t		size(void) { return _mutant.size(); }
	void		push( T x ) { _mutant.push_front(x); }
	void		pop(void) { _mutant.pop_front(); }
	T			top(void) { return _mutant.front(); }

    private:

	std::list<T> _mutant;
};

#endif