#ifndef SPAN_H
#define SPAN_H

#include <algorithm>

class Span
{
public:
	Span(unsigned int N);
	Span(const Span& other);

	~Span();

	void addNumber(int value);

	template <typename InputIt>
	void addNumbers(InputIt first, InputIt last)
	{
		while (first != last)
		{
			addNumber(*first);
			first++;
		}
	}

	unsigned int shortestSpan() const;
	unsigned int longestSpan() const;

	Span& operator=(const Span& other);

	class OutOfRange : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return "Out of range";
		}
	};

	class TooSmall : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return "Too small";
		}
	};

private:
	size_t _size;
	size_t _currIdx;
	int* _data;
};

#endif // SPAN_H
