#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>

/*
�����ε�
������ �̸��� ���������� �ٸ� ������ �ϰ� ����� ��
��ǥ������ �Լ� �����ε尡 �ִ�.

�Լ� �����ε带 ���� �̸��� ������ ���� �ٸ� �Ķ���Ϳ� ���� ������ ������ ���� ������ �� �� �ִ�.*/

/*Ŭ���������� �Լ� �����ε�
�̴� Ŭ���� ����Լ������� �����ϰ� �����ϰ� �ȴ�.
���� Ŭ���� �����ڿ� ���ؼ��� �����ϰ� �ۿ��� �� �ִµ�

Ŭ���� �����ڵ� ����� �Ԥ����� �� �� �ְ�
Ŭ���� �����ڵ� �Ķ������ Ÿ�԰� ������ ���� � �����ڸ� ȣ���� �� ������ ������ �� �ֱ� �����̴�.*/

class Student {
public:
	int student_no;
	char student_name[100];

	Student() {
		student_no = 0;
		strcpy(student_name, "�ƹ���");
	}

	Student(int studentNo, const char* student_name) {
		student_no = studentNo;
		strcpy(this->student_name, student_name);
	}

	void printInfo() {
		printf("%s �л��� �л���ȣ: %d\n", student_name, student_no);
	}
};

int main() {
	Student* s1 = new Student();
	Student* s2 = new Student(10, "ȫ�浿");

	s1->printInfo();
	s2->printInfo();

	return 0;
}