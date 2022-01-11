/* Fraction 클래스의 멤버 함수들을 정의하는
   fraction.cpp 인터페이스 파일 */
#include <iostream>
#include <cmath>
#include <cassert>
#include "fraction.h"
using namespace std;

/* 매개변수 있는 생성자는 불변 속성에 따라서
분자와 분모 값을 받고 약분하여 분수 객체를 생성*/
Fraction::Fraction(int num, int den):numer(num), denom(den){
	normalize();
}

/* 기본 생성자는 0/1을 생성
별도의 유효성 검사가 필요하지 않음*/
Fraction::Fraction():numer(0),denom(1)
{
}

/* 복사 생성자는 기본의 객체가 가진 분자와 분모를 활용해서 객체를 복사
이미 복사 대상이 약분이 되어 있을 것이므로
약분 처리를 따로 하지 않아도 됨*/
Fraction::Fraction(const Fraction& fract):numer(fract.numer), denom(fract.denom)
{
}

/* 소멸자에서는 별도의 작업은 따로 하지 않음 */
Fraction::~Fraction()
{
}

/* getNumber 함수는 접근자 함수
호스트 객체의 분자를 리턴*/
int Fraction::getNumer() const
{
	return numer;
}

/* getDenum 함수는 접근자 함수
호스트 객체의 분모를 리턴*/
int Fraction::getDenom() const
{
	return denom;
}

/* print 함수는 접근자 함수
화면에 분수 객체를 x/y 형태로 출력하는 부자 작용을 만듦*/
void Fraction::print() const{
	cout << numer << "/" << denom << endl;
}

void Fraction::setNumer(int num)
{
}

void Fraction::setDenom(int den)
{
}
void Fraction::normalize()
{
}

int Fraction::gcd(int n, int m)
{
	return 0;
}
