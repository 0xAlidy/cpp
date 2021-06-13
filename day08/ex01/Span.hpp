
#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
# include <stdexcept>
# include <algorithm> 

class Span
{
    public:

    Span(void);
    Span(unsigned int n);
    Span(const Span& obj);
    ~Span(void);
    Span& operator=(const Span& obj);

    unsigned int    shortestSpan(void);
    unsigned int    longestSpan(void);
    void			addNumber(int n);
    void			addRange(int a, int b);

    private:

    std::vector<int>    _vect;
    unsigned int        _n;
}

#endif