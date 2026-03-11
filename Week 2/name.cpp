// name.cpp

#include <iostream>
#include <string>

int main(void) {
	// 이름을 물음
	std::cout << "Please enter your first name: ";
	// 이름을 읽어 들임
	std::string name;
	std::cin >> name; //공백 있으면 공백 전까지 입력 받음
	
	// 출력하는 메시지를 구성
	const std::string greeting = "Hello, " + name + "!";

	/*
	  ***************** => 1st
	  *               * => 2nd
	  * Hello, Aaron! * => 3rd
	  *               * => 4th
	  ***************** => 5th
	*/

	// 인사말의 두 번째 행과 네 번째 행
	const std::string spaces(greeting.size(), ' ');
	const std::string second = "* " + spaces + " *";

	// 인사말의 첫 번째 행과 다섯 번째 행
	const std::string first(second.size(), '*');
	
	//모두 출력
	std::cout
		<< std::endl // 줄 바꿈
		<< first << std::endl
		<< second << std::endl
		<< "* " << greeting << " *" << std::endl
		<< second << std::endl
		<< first << std::endl
		<< std::endl;

	return 0;
}