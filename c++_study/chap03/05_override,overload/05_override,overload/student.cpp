#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>

/*
오버로드
동일한 이름을 갖고있지만 다른 동작을 하게 만드는 것
대표적으로 함수 오버로드가 있다.

함수 오버로드를 통해 이름은 같지만 서로 다른 파라미터에 대해 각각의 동작을 따로 지정해 줄 수 있다.*/

/*클래스에서의 함수 오버로딩
이는 클래스 멤버함수에서도 동일하게 적용하게 된다.
또한 클래스 생성자에 대해서도 동일하게 작용할 수 있는데

클래스 생성자도 어찌보면 함ㅅ무라 할 수 있고
클래스 생성자도 파라미터의 타입과 갯수를 통해 어떤 생성자를 호출할 수 있을지 결정할 수 있기 때문이다.*/

class Student {
public:
	int student_no;
	char student_name[100];

	Student() {
		student_no = 0;
		strcpy(student_name, "아무개");
	}

	Student(int studentNo, const char* student_name) {
		student_no = studentNo;
		strcpy(this->student_name, student_name);
	}

	void printInfo() {
		printf("%s 학생의 학생번호: %d\n", student_name, student_no);
	}
};

int main() {
	Student* s1 = new Student();
	Student* s2 = new Student(10, "홍길동");

	s1->printInfo();
	s2->printInfo();

	return 0;
}