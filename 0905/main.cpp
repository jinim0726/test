//------------------------------------------------------
// 2024.09.05
// 
// 1교시
// save 기능을 파일로 분리한다.
// 
// 2교시
// 
//------------------------------------------------------
#include <iostream>
#include <format>
#include "save.h"

//using namespace std;

// C++ 실행파일을 실행하면 cout, cin, cerr, clog 객체가 자동 생성됨
// default로 cin은 키보드, 나머지 3객체는 모니터에 연결된다.

int main()
{
	//std::cout << "안녕? C++" << std::endl; // '\n'

	// [실습] 몇 단을 출력하고 싶은지 물어봐서 그 단에 해당하는 내용을 출력
	// 입력 - 3
	// 3 x 1 = 3 쭉 ~~~

	std::cout << "구구단 중 몇 단을 출력하고 싶니? : ";

	int num;
	std::cin >> num;
	for (int i = 0; i < 9; i++)
	{
		std::cout << num << " X " << i + 1 << " = " << num * (i + 1) << std::endl;
		std::cout << std::format"{num} x " << std::endl;
	}

	save("main.cpp");
}