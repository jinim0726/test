//------------------------------------------------------
// 2024.09.05
// 
// 1����
// save ����� ���Ϸ� �и��Ѵ�.
// 
// 2����
// 
//------------------------------------------------------
#include <iostream>
#include <format>
#include "save.h"

//using namespace std;

// C++ ���������� �����ϸ� cout, cin, cerr, clog ��ü�� �ڵ� ������
// default�� cin�� Ű����, ������ 3��ü�� ����Ϳ� ����ȴ�.

int main()
{
	//std::cout << "�ȳ�? C++" << std::endl; // '\n'

	// [�ǽ�] �� ���� ����ϰ� ������ ������� �� �ܿ� �ش��ϴ� ������ ���
	// �Է� - 3
	// 3 x 1 = 3 �� ~~~

	std::cout << "������ �� �� ���� ����ϰ� �ʹ�? : ";

	int num;
	std::cin >> num;
	for (int i = 0; i < 9; i++)
	{
		std::cout << num << " X " << i + 1 << " = " << num * (i + 1) << std::endl;
		std::cout << std::format"{num} x " << std::endl;
	}

	save("main.cpp");
}