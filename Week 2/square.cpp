// square.cpp

#include <iostream>
#include <string>

// 표준 라이브러리에서 가져와서 사용할 이름을 언급
using std::cin;
using std::cout;
using std::endl;

// * 사각형 만들기
int main(void) {
	cout << "1. Square OR 2. Rect? >>> ";
	int option;
	cin >> option;
	if (option !=1 && option !=2) {
		cout << "Error : Only choose 1 or 2 ! ";
		return 0;
	}


	cout << "What size ? >>>";
	int size;
	cin >> size; // 10
	 

	// 행 출력
	for (int i = 0; i < size; i++) {
		//열 출력
		for (int j = 0; j < size; j++) {
			if (option == 1) {
				cout << "*"; // 10 x 10 square
			}
			else if(option ==2) {
				cout << "**"; // 20 x 10 Rectangle
			}
			else {
				cout << "Error : Only choose 1 or 2 ! ";
				return 0x34AF; // 16진법 (hex) , 0o712는 8진법
			}
		}
		// 행 끝 줄 바꿈
		cout << endl;
	}
	
	return 0;
}
