#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>

enum Gender {
	MALE, FEMALE
};

class Student {
public:
	char name[10];
	int student_no;
	Gender gender;

	Student(const char* name, int student_no, Gender gender) {
		strcpy(this->name, name);
		this->student_no = student_no;
		this->gender = gender;
	}

	void printInfo() {
		printf("%s�� �л���ȣ�� %d�Դϴ�. ������ %s�Դϴ�.\n",
			name, student_no, gender == Gender::MALE ? "����" : "����");
	}
};

int main() {
	Student* student = new Student("����", 2, Gender::FEMALE);
	student->printInfo();

	return 0;
}