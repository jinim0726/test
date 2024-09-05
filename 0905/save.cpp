//----------------------------------------------
// save.cpp - 한 학기 강의를 저장하기 위한 기능 모음
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
		std::ofstream out{ "2024 2 C++ 월78목45.txt", std::ios::app };

		auto now = std::chrono::system_clock::now();
		using namespace std::literals;
		now += 9h;

		out << std::endl;
		out << "=========================" << std::endl;
		//out << "저장시간 : " << now << std::endl;
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