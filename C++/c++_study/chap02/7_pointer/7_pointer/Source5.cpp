// void*
// 어떠한 포인터도 될 수 있는 것이 void*
// 모든 포인터의 기본형

// 다른 포인터 타입에서 void*로 변환될 때 자동 형변환
// void*에서 다른 포인터 타입으로 변환될 땐 형변환 명시


#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cstring>

void foo(const char* str) {
	printf("%c", str[1]);
}

int main() {
	char* str = (char*)malloc(sizeof(char) * 12);
	strcpy(str, "Hello World");
	foo(str);

	void* vp = str;

	return 0;
}