#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

enum class Month {
	JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
	Month m = Month::OCT;
	switch (m) {
	case Month::JAN: printf("1���Դϴ�."); break;
	case Month::FEB: printf("2���Դϴ�."); break;
	case Month::MAR: printf("3���Դϴ�."); break;
	case Month::APR: printf("4���Դϴ�."); break;
	case Month::MAY: printf("5���Դϴ�."); break;
	case Month::JUN: printf("6���Դϴ�."); break;
	case Month::JUL: printf("7���Դϴ�."); break;
	case Month::AUG: printf("8���Դϴ�."); break;
	case Month::SEP: printf("9���Դϴ�."); break;
	case Month::OCT: printf("10���Դϴ�."); break;
	case Month::NOV: printf("11���Դϴ�."); break;
	case Month::DEC: printf("12���Դϴ�."); break;
	}

	printf("%d", m);
}