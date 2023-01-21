#include <iostream>
#include "span.h"
#include <vector>

int main()
{
	std::vector<int> vec;
	vec.push_back(6);
	vec.push_back(3);
	vec.push_back(17);
	vec.push_back(9);
	vec.push_back(11);

	Span sp = Span(5);

	sp.addNumbers(vec.begin(), vec.end());

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return 0;
}
