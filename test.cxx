#include <iostream>
#include <string>

int main()
{
	std::vector<int> xs{1,2,3};
	for (auto x: xs)
		std::cout << x << std::endl;
}
