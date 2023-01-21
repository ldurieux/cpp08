#include <iostream>
#include "easyfind.hpp"

int main()
{
	std::vector<int> vec;
	vec.push_back(4);
	vec.push_back(8);
	vec.push_back(9);
	vec.push_back(6);
	vec.push_back(3);

	std::cout << easyfind(vec, 3) << std::endl;

	return 0;
}
