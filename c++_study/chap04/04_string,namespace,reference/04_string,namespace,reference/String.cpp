#define __CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <string>
#include <iostream>

int main() {
	std::string myStr = "Hello World";
	myStr = myStr + " Hello C++";

	//printf("%s\n", myStr.c_str());
	//std::cout << myStr<<"\n";

	std::string str1 = "apple";
	std::string str2 = "apple";

	if (str1.compare(str2) == 0)
		printf("�� ���ڿ��� �����ϴ�.");
	else
		printf("�� ���ڿ��� �ٸ��ϴ�.");

	return 0;
}