/*extern
extern 키워드는 '외부에 존재한다'라는 뜻이다.
어떻게 보면 C/C++에서 obj 파일로 링크가 되면서 만들어지는
진정한 전역 변수를 만들어줄 수 있는 키워드라고 볼 수 있다.

이 extern 키워드의 활용과 뜻은 굉장히 많지만
초보적인 내용에서는 '전역변수'를 만들어준다.
이 정도로만 이해해도 충분하다.*/


#include "Header.h"

int MyClass::static_member_int = 1;

int main() {
	MyClass::static_member_int = 100;
	printf("%d", MyClass::static_member_int);

	return 0;

}

void MyClass::foo() {


}

void MyClass::goo() {

}