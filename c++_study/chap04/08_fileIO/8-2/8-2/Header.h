#ifndef __HEADER_H__
#define __HEADER_H__

#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <string>
#include <vector>

int getInteger(const char* prompt);
std::string getString(const char* propert);

class Student {
public:
	std::string name;
	int korean;
	int math;
	int english;

	Student(std::string name, int korean, int math, int english);
	void printInfo();
};
#endif // !__HEADER_H__





