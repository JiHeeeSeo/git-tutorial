// const char*
// 하드코딩된 문자열 타입, const char*는 하드코딩된 문자열을 넣기 위해 = 기호를 사용한다
// strcpy를 사용할 수 없다.

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
	return 0;
}