#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
	private:
		std::vector<int> list;
		unsigned int n;
	public:
		Span();
		Span(unsigned int n);
		Span(const Span &copy);
		Span &operator=(const Span &copy);
		~Span();
		void addNumber(int num);
		void addRandom(int num);
		int shortestSpan();
		int longestSpan();
	class ListFullException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	class NoSpanException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

#endif