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
		printf("�ٸ�: %d, �̸�: %s\n", legs, name);
	}
};

class Human : public Animal {
public:
	char regist_no[40];

	Human(const char* regist_no) : Animal(2, "���"){
		strcpy(this->regist_no, regist_no);
	}

	void printInfo() {
		printf("�̸�: %s, �ֹε�Ϲ�ȣ: %s\n", name, regist_no);
	}
};

int main() {
	Human* human = new Human("1234-5678");
	Animal* animal = new Animal(2, "��");

	human->printInfo();
	animal->printInfo();
}