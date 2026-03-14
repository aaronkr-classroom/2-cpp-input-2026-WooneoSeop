// 2-7

#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using std::cin; using std::endl;
using std::cout; using std::string;

int main(void) {

	int i = 10;
	while (i > -6) {
		std::this_thread::sleep_for(std::chrono::seconds(1));
		cout << i << endl;
		i -= 1;
	}
	return 0;
}