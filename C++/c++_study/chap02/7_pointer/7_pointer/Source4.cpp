// const char*
// �ϵ��ڵ��� ���ڿ� Ÿ��, const char*�� �ϵ��ڵ��� ���ڿ��� �ֱ� ���� = ��ȣ�� ����Ѵ�
// strcpy�� ����� �� ����.

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