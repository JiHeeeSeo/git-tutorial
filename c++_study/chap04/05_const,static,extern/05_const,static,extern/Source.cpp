/*
const
const는 상수라는 뜻이다.
상수라는 것은 프로그램이 시작되면서 끝날때까지 절때 변하지 않는 값을 의미한다.

하지만 진정한 의미로서의 const는 define 매크로이며,const 키워드를 이용해 만든 변수는 상수이지만
'저장공간'을 갖고 있는 변수이며 실질적으로 프로그램 내부에 박혀있는 값은 아니다.*/

/*클래스 내부에서의 const 멤버
이 const라는 것이 실제로 변수로서 저장공간을 갖고 있다는 것을 확인하는 방법은 클래스 멤버를 const로 선언하는 것이다.
이렇게 const로 선언된 클래스 멤버 변수는
선언과 동시에 초기화를 하거나, 클래스 생성자에서 초기화를 해줘야 한다.

생성자에서 초기화를 해 줄때에는 변수이름(초기값)과 같은 방법을 이용해 초기화를 한다.*/

/*static
static이라는 것은 '정적'이라는 뜻이다.
정적인 어떤가 라는 뜻이며, 유일하고 독립적인 어떤 것을 의미한다.

이 static은 class의 내부에 존재할 경우 class 내부에서 유일하고 독립적인 멤버라는 뜻이 되며

class 외부에 존재할 경우 obj 파일(오브젝트 파일) 내부에서 유일하고 독립적인 존재라는 뜻이 된다.

(글로벌 이라는 뜻이 아니다 절대로 그렇게 생각하면 안된다.)*/

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