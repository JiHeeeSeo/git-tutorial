#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

enum class Month {
	JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
	Month m = Month::OCT;
	switch (m) {
	case Month::JAN: printf("1월입니다."); break;
	case Month::FEB: printf("2월입니다."); break;
	case Month::MAR: printf("3월입니다."); break;
	case Month::APR: printf("4월입니다."); break;
	case Month::MAY: printf("5월입니다."); break;
	case Month::JUN: printf("6월입니다."); break;
	case Month::JUL: printf("7월입니다."); break;
	case Month::AUG: printf("8월입니다."); break;
	case Month::SEP: printf("9월입니다."); break;
	case Month::OCT: printf("10월입니다."); break;
	case Month::NOV: printf("11월입니다."); break;
	case Month::DEC: printf("12월입니다."); break;
	}

	printf("%d", m);
}