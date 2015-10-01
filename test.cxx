#include <iostream>
#include <string>
#include <map>
#include <algorithm>

int main()
{
	std::map<std::string, int> freq_tbl;
	std::string temp;
	while (std::cin >> temp) {
		freq_tbl[temp]++;
	}

	for (auto& p : freq_tbl) {
		std::cout << p.first << ": " << p.second << std::endl;
	}
}
