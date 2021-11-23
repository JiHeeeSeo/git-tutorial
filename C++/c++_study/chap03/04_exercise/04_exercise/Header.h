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
		printf("공격력: %d, ", atk);
		printf("사정거리: %d, ", range);
		printf("가격: %d\n\n", price);
	}
};

class ShortSword : public Fantasy {
public:
	ShortSword() : Fantasy(10, 5, 500, "숏 소드") {
	}
};

class LongSword : public Fantasy {
public:
	LongSword() : Fantasy(20, 10, 2000, "롱 소드") {
	}
};

class Hammer : public Fantasy {
public:
	Hammer() : Fantasy(30, 7, 3000, "해머") {
	}
};