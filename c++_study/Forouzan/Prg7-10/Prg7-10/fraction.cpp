/* Fraction Ŭ������ ��� �Լ����� �����ϴ�
   fraction.cpp �������̽� ���� */
#include <iostream>
#include <cmath>
#include <cassert>
#include "fraction.h"
using namespace std;

/* �Ű����� �ִ� �����ڴ� �Һ� �Ӽ��� ����
���ڿ� �и� ���� �ް� ����Ͽ� �м� ��ü�� ����*/
Fraction::Fraction(int num, int den):numer(num), denom(den){
	normalize();
}

/* �⺻ �����ڴ� 0/1�� ����
������ ��ȿ�� �˻簡 �ʿ����� ����*/
Fraction::Fraction():numer(0),denom(1)
{
}

/* ���� �����ڴ� �⺻�� ��ü�� ���� ���ڿ� �и� Ȱ���ؼ� ��ü�� ����
�̹� ���� ����� ����� �Ǿ� ���� ���̹Ƿ�
��� ó���� ���� ���� �ʾƵ� ��*/
Fraction::Fraction(const Fraction& fract):numer(fract.numer), denom(fract.denom)
{
}

/* �Ҹ��ڿ����� ������ �۾��� ���� ���� ���� */
Fraction::~Fraction()
{
}

/* getNumber �Լ��� ������ �Լ�
ȣ��Ʈ ��ü�� ���ڸ� ����*/
int Fraction::getNumer() const
{
	return numer;
}

/* getDenum �Լ��� ������ �Լ�
ȣ��Ʈ ��ü�� �и� ����*/
int Fraction::getDenom() const
{
	return denom;
}

/* print �Լ��� ������ �Լ�
ȭ�鿡 �м� ��ü�� x/y ���·� ����ϴ� ���� �ۿ��� ����*/
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
