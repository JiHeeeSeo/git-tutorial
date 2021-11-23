#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

class Animal {
public:
	int legs;
	char name[20];

	Animal(int legs, const char* name) {
		this->legs = legs;
		strcpy(this->name, name);
	}

	void printInfo() {
		printf("다리: %d, 이름: %s\n", legs, name);
	}
};

class Human : public Animal {
public:
	char regist_no[40];

	Human(const char* regist_no) : Animal(2, "사람"){
		strcpy(this->regist_no, regist_no);
	}

	void printInfo() {
		printf("이름: %s, 주민등록번호: %s\n", name, regist_no);
	}
};

int main() {
	Human* human = new Human("1234-5678");
	Animal* animal = new Animal(2, "닭");

	human->printInfo();
	animal->printInfo();
}