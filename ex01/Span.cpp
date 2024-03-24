#include "Span.hpp"

Span::Span() : n(0) {}

Span::Span(unsigned int n) : n(n) {}

Span::Span(const Span &copy) : list(copy.list), n(copy.n) {}

Span &Span::operator=(const Span &copy)
{
    if (this == &copy)
        return (*this);
    list = copy.list;
    n = copy.n;
    return (*this);
}

Span::~Span() {}

void Span::addNumber(int num)
{
    if (list.size() < n)
        list.push_back(num);
    else
        throw Span::ListFullException();
}

void Span::addRandom(int num)
{
    srand(time(NULL));
    for (int i = 0; i < num; i++)
        addNumber(rand());
}

int Span::shortestSpan()
{
    if (list.size() <= 1)
        throw Span::NoSpanException();
    std::vector<int> sorted = list;
    std::sort(sorted.begin(), sorted.end());
    int min = sorted[1] - sorted[0];
    for (unsigned int i = 2; i < sorted.size(); i++)
    {
        if (sorted[i] - sorted[i - 1] < min)
            min = sorted[i] - sorted[i - 1];
    }
    return min;
}

int Span::longestSpan()
{
    if (list.size() <= 1)
        throw Span::NoSpanException();
    std::vector<int> sorted = list;
    std::sort(sorted.begin(), sorted.end());
    return sorted[sorted.size() - 1] - sorted[0];
}

const char *Span::ListFullException::what() const throw()
{
    return "List is full";
}

const char *Span::NoSpanException::what() const throw()
{
    return "No span to find";
}
