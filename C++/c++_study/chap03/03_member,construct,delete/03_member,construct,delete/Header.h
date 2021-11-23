#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cmath>

namespace{
int number_counter = 1;
}

class Employee {
public:
	int no;
	char* name;
	int gender;
	char* rank;

	Employee(char* name, int gender, char* rank) {
		this->name = new char[strlen(name) + 1];
		// +1: null���� �ڸ�
		this->gender = gender;
		this->rank = new char[strlen(rank) + 1];
		this->no = number_counter;
		number_counter++;
	}

	~Employee() {
		printf("%d�� �����ȣ �����Ǿ����ϴ�.\n", no);
		delete[] name;
		delete[] rank;
	}

	void printInfo() {
		printf("��� ��ȣ: %d / ", no);
		printf("�����: %s\n", name);
		printf("����: %s / ", gender == 1 ? "����" : "����");
		printf("����: %s\n", rank);
	}
};

int getInt(const char* prompt);

// �Լ� ���� �� �޸� ������ �� ����� �Ѵ�.
char* getString(const char* prompt);