#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>

class FantasyUnit {
public:
	int maxHp;
	int atk;
	int range;
	int movementSpeed;

	char name[50];

	FantasyUnit(int maxHp, int atk, int range, int movementSpeed){
		this->maxHp = maxHp;
		this->atk = atk;
		this->range = range;
		this->movementSpeed = movementSpeed;
	}

	void printInfo() {
		printf("%s�� �ɷ�ġ\n", name);
		printf("�ִ� ü��: %d\n", maxHp);
		printf("���ݷ�: %d\n", atk);
		printf("�����Ÿ�: %d\n", range);
		printf("�̵��ӵ�: %d\n\n", movementSpeed);
	}

};

class Goblin : public FantasyUnit {
public:
	Goblin() :FantasyUnit(60, 5, 10, 10) {
		
		strcpy(name, "���");
	}
};

class Orc : public FantasyUnit {
public:
	Orc() :FantasyUnit(80, 10, 12, 8){
		
		strcpy(name, "��ũ");
	}
};

class Slime : public FantasyUnit {
public:
	Slime() :FantasyUnit(100, 3, 5, 4){
		
		strcpy(name, "������");
	}
};

class SkeletonArcher : public FantasyUnit {
public:
	SkeletonArcher() :FantasyUnit(60, 20, 50, 3){
		
		strcpy(name, "�ذ�ü�");
	}
};