#include "Header.h"

// 부모 클래스
class Animal {
public:
	int legs;
	char name[50];

	Animal(int legs, const char* name) {
		printf("Animal 생성자가 실행됨.\n");
		this->legs = legs;
		strcpy(this->name, name);
	}

	void printAnimalInfo() {
		printf("다리의 갯수: %d\n", legs);
		printf("이름: %s\n", name);
	}
};

// 자식 클래스
class Person :public Animal{
public:
	Person(const char* regist_no) : Animal(2, "사람") {
		printf("Person 생성자가 실행됨.\n");
		strcpy(this->regist_no, regist_no);
	}

	char regist_no[30];
};

class Dog : public Animal {
public:
	Dog() : Animal(4, "개") {
		printf("Dog 생성자가 실행됨.\n");
	}
	
};

int main() {
	Person* p = new Person("1234-5678");
	p->printAnimalInfo();

	Dog* d = new Dog();
	d->printAnimalInfo();

	return 0;
}