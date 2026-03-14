// 2-5
#include <iostream>
#include <string>

using std::cin; using std::endl;
using std::cout; using std::string;


int main(void) {

	// 정사각형
	int length;
	cout << "정사각형 한 변의 길이 : ";
	cin >> length;

	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			cout << '*';
		}
		cout << endl;
	}
	
	

	// 직사각형
	int rows, cols;

	cout << "직사각형의 가로 길이 : " ;
	cin >> rows;
	cout << "직사각형의 세로 길이 : " ;
	cin >> cols;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {

			if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
				cout << '*';
			}
			else {
				cout << ' ';
			}
		}
		cout << endl;
	}

	
	// 삼각형
	int tri;
	cout << "삼각형의 높이 : ";
	cin >> tri;

	for (int i = 1; i <= tri; i++) {

		for (int j = 1; j <= tri - i; j++) {
			cout << ' ';
		}

		for (int k = 1; k <= 2 * i - 1; k++) {
			if (k == 1 || k == 2 * i - 1 || i == tri) {
				cout << '*';
			}
			else
				cout << ' ';
		}
		cout << endl;
	}

	return 0;
}