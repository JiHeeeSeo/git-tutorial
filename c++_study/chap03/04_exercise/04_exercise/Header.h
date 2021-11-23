#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>

class Fantasy {
public:
	int atk;
	int range;
	int price;

	char name[50];

	Fantasy(int atk, int range, int price, const char* name) {
		this->atk = atk;
		this->range = range;
		this->price = price;
		strcpy(this->name, name);
	}

	void printInfo() {
		printf("%s, ", name);
		printf("���ݷ�: %d, ", atk);
		printf("�����Ÿ�: %d, ", range);
		printf("����: %d\n\n", price);
	}
};

class ShortSword : public Fantasy {
public:
	ShortSword() : Fantasy(10, 5, 500, "�� �ҵ�") {
	}
};

class LongSword : public Fantasy {
public:
	LongSword() : Fantasy(20, 10, 2000, "�� �ҵ�") {
	}
};

class Hammer : public Fantasy {
public:
	Hammer() : Fantasy(30, 7, 3000, "�ظ�") {
	}
};