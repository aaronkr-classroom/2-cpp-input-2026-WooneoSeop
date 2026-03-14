// 2-9

#include <iostream>
#include <string>

using std::cin; using std::endl;
using std::cout; using std::string;

int main(void) {
	int a = 0;
	int b = 0;
	cout << "두 개의 숫자를 입력하세요(띄어서 입력해주세요) : " << endl;
	cin >> a >> b;
	if (a == b) {
		cout << " 두 숫자의 값은 같습니다." << endl;
	}
	cout << "두 숫자 중 큰 값은 " << ((a > b) ? a : b) << "입니다." << endl;
	
	return 0;
}