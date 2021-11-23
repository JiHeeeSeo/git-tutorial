#include "Header.h"

// �θ� Ŭ����
class Animal {
public:
	int legs;
	char name[50];

	Animal(int legs, const char* name) {
		printf("Animal �����ڰ� �����.\n");
		this->legs = legs;
		strcpy(this->name, name);
	}

	void printAnimalInfo() {
		printf("�ٸ��� ����: %d\n", legs);
		printf("�̸�: %s\n", name);
	}
};

// �ڽ� Ŭ����
class Person :public Animal{
public:
	Person(const char* regist_no) : Animal(2, "���") {
		printf("Person �����ڰ� �����.\n");
		strcpy(this->regist_no, regist_no);
	}

	char regist_no[30];
};

class Dog : public Animal {
public:
	Dog() : Animal(4, "��") {
		printf("Dog �����ڰ� �����.\n");
	}
	
};

int main() {
	Person* p = new Person("1234-5678");
	p->printAnimalInfo();

	Dog* d = new Dog();
	d->printAnimalInfo();

	return 0;
}