// 2-8

#include <iostream>
#include <string>

using std::cin; using std::endl;
using std::cout; using std::string;

int main(void) {
	int p = 1;

	for (int i = 2; i < 10;i++) {
		cout << p << '*' << i << '=' << p * i << endl;
		p = p * i;
	}
	
	return 0;
}