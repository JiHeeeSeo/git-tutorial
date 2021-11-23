#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cmath>

namespace{
int number_counter = 1;
}

class Employee {
public:
	int no;
	char* name;
	int gender;
	char* rank;

	Employee(char* name, int gender, char* rank) {
		this->name = new char[strlen(name) + 1];
		// +1: null문자 자리
		this->gender = gender;
		this->rank = new char[strlen(rank) + 1];
		this->no = number_counter;
		number_counter++;
	}

	~Employee() {
		printf("%d의 사원번호 삭제되었습니다.\n", no);
		delete[] name;
		delete[] rank;
	}

	void printInfo() {
		printf("사원 번호: %d / ", no);
		printf("사원명: %s\n", name);
		printf("성별: %s / ", gender == 1 ? "남성" : "여성");
		printf("직급: %s\n", rank);
	}
};

int getInt(const char* prompt);

// 함수 실행 후 메모리 해제를 꼭 해줘야 한다.
char* getString(const char* prompt);