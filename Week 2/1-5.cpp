#include <iostream>
#include <string>

int main(void) {

	//1-5
	{
		{
			const std::string s = "a string";
			{
				std::string x = s + ", really";
				std::cout << s << std::endl;
				std::cout << x << std::endl;
			}
			
		}
	}


	return 0;
}