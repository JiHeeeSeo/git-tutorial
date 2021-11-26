/*
const
const�� ������ ���̴�.
������ ���� ���α׷��� ���۵Ǹ鼭 ���������� ���� ������ �ʴ� ���� �ǹ��Ѵ�.

������ ������ �ǹ̷μ��� const�� define ��ũ���̸�,const Ű���带 �̿��� ���� ������ ���������
'�������'�� ���� �ִ� �����̸� ���������� ���α׷� ���ο� �����ִ� ���� �ƴϴ�.*/

/*Ŭ���� ���ο����� const ���
�� const��� ���� ������ �����μ� ��������� ���� �ִٴ� ���� Ȯ���ϴ� ����� Ŭ���� ����� const�� �����ϴ� ���̴�.
�̷��� const�� ����� Ŭ���� ��� ������
����� ���ÿ� �ʱ�ȭ�� �ϰų�, Ŭ���� �����ڿ��� �ʱ�ȭ�� ����� �Ѵ�.

�����ڿ��� �ʱ�ȭ�� �� �ٶ����� �����̸�(�ʱⰪ)�� ���� ����� �̿��� �ʱ�ȭ�� �Ѵ�.*/

/*static
static�̶�� ���� '����'�̶�� ���̴�.
������ ��� ��� ���̸�, �����ϰ� �������� � ���� �ǹ��Ѵ�.

�� static�� class�� ���ο� ������ ��� class ���ο��� �����ϰ� �������� ������ ���� �Ǹ�

class �ܺο� ������ ��� obj ����(������Ʈ ����) ���ο��� �����ϰ� �������� ������ ���� �ȴ�.

(�۷ι� �̶�� ���� �ƴϴ� ����� �׷��� �����ϸ� �ȵȴ�.)*/

#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

#define MYVALUE 100

class Person {
public:
	const int age;

	Person(int n) :age(n){

	};
};

int main() {

	const char* str;
	char* myStr = new char[100];
	strcpy(myStr, "Hello World");
	str = myStr;

	printf("%s\n", str);
	return 0;

	//const int value = MYVALUE;
	//printf("%d\n", value);
	int input;
	fseek(stdin, 0, SEEK_END);
	scanf("%d", &input);

	Person* p = new Person(input);


	printf("%d\n", p->age);
	
	return 0;
}