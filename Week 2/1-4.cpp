//연습문제 1-3,4,5,6

#include <iostream>
#include <string>

int main(void) {

	// 1-4
	{
		const std::string s = "a string";
		std::cout << s << std::endl;
		{
			const std::string s = "another string";
			std::cout << s << std::endl;
		}
	}

	return 0;
}