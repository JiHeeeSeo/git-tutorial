//#define _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//#include <cstring>

class Student {
public:
	int student_no;
	char* name;
	int gender; // 0= 남자, 1=여자

	Student(int pStdNo, const char* n, int g) {
		student_no = pStdNo;
		name = new char[strlen(n) + 1];
		gender = g;
	}

	~Student() {
		printf("%s의 소멸자 호출\n", name);
		delete[] name;
	}

	void printStudentInfo() {
		printf("학생 번호: %d\n", student_no);
		printf("학생 이름: %s\n", name);
		printf("성별: %s\n", gender == 0 ? "남자" : "여자");
	}

};

int main() {
	
	Student s = Student(1234, "김말똥", 0);
	s.printStudentInfo();

	// heap 영역에 있기 때문에 직접 해제해줘야됨!
	Student* ps = new Student(3456, "서지희", 1);
	ps->printStudentInfo();
	
	delete ps;

	return 0;
}