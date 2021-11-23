//#define _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//#include <cstring>

class Student {
public:
	int student_no;
	char* name;
	int gender; // 0= ����, 1=����

	Student(int pStdNo, const char* n, int g) {
		student_no = pStdNo;
		name = new char[strlen(n) + 1];
		gender = g;
	}

	~Student() {
		printf("%s�� �Ҹ��� ȣ��\n", name);
		delete[] name;
	}

	void printStudentInfo() {
		printf("�л� ��ȣ: %d\n", student_no);
		printf("�л� �̸�: %s\n", name);
		printf("����: %s\n", gender == 0 ? "����" : "����");
	}

};

int main() {
	
	Student s = Student(1234, "�踻��", 0);
	s.printStudentInfo();

	// heap ������ �ֱ� ������ ���� ��������ߵ�!
	Student* ps = new Student(3456, "������", 1);
	ps->printStudentInfo();
	
	delete ps;

	return 0;
}