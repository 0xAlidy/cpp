#include "Span.hpp"

Span::Span(unsigned int n): _n(n)
{
    _vect.reserve(n);
}

Span::Span(const Span& obj): _n(obj._n), _vect(obj._vect)
{

}

Span::~Span(void)
{

}

Span&   Span::operator=(const Span& obj)
{
    _n = obj._n;
    _vect = obj._vect;
    return (*this);
}

void    Span::addNumber(int n)
{
    if (_vect.size() < _n)
        _vect.push_back(n);
    else
        throw std::out_of_range("Out of range.");
}

void    Span::addRange(int a, int b)
{
    for (int i = a; a <= b; a++)
        addNumber(a);
}

unsigned int    Span::shortestSpan(void)
{
    if (_vect.size() <= 1)
        throw std::logic_error("no span to calculate");
    int res = INT_MAX;
    std::vector<int> tmp = _vect;
    std::sort (_vect.begin(), _vect.end());
    for (unsigned int i = 0; i < _vect.size() - 1; ++i)
	{
		if ( _vect[i + 1] - _vect[i] < res)
			res = _vect[i + 1] - _vect[i];
	}
	return res;
}

unsigned int    Span::longestSpan(void)
{
    if (_vect.size() <= 1)
        throw std::logic_error("no span to calculate");
    return (*std::max_element(_vect.begin(), _vect.end()) - *std::min_element(_vect.begin(), _vect.end());)
}