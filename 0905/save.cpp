//----------------------------------------------
// save.cpp - �� �б� ���Ǹ� �����ϱ� ���� ��� ����
// 2024.09.05
//----------------------------------------------

#include <fstream>
#include <chrono>
#include <iostream>

void save(const std::string& FileName)
{
	std::ifstream in{ FileName };
	if (not in)
	{
		return;
	}

	else
	{
		std::ofstream out{ "2024 2 C++ ��78��45.txt", std::ios::app };

		auto now = std::chrono::system_clock::now();
		using namespace std::literals;
		now += 9h;

		out << std::endl;
		out << "=========================" << std::endl;
		//out << "����ð� : " << now << std::endl;
		out << "=========================" << std::endl;
		out << std::endl;

		char c;
		in >> std::noskipws;
		while (in >> c)
		{
			out << c;
		}
	}
}