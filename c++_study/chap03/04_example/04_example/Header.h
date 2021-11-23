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
		printf("%s의 능력치\n", name);
		printf("최대 체력: %d\n", maxHp);
		printf("공격력: %d\n", atk);
		printf("사정거리: %d\n", range);
		printf("이동속도: %d\n\n", movementSpeed);
	}

};

class Goblin : public FantasyUnit {
public:
	Goblin() :FantasyUnit(60, 5, 10, 10) {
		
		strcpy(name, "고블린");
	}
};

class Orc : public FantasyUnit {
public:
	Orc() :FantasyUnit(80, 10, 12, 8){
		
		strcpy(name, "오크");
	}
};

class Slime : public FantasyUnit {
public:
	Slime() :FantasyUnit(100, 3, 5, 4){
		
		strcpy(name, "슬라임");
	}
};

class SkeletonArcher : public FantasyUnit {
public:
	SkeletonArcher() :FantasyUnit(60, 20, 50, 3){
		
		strcpy(name, "해골궁수");
	}
};