// void*
// ��� �����͵� �� �� �ִ� ���� void*
// ��� �������� �⺻��

// �ٸ� ������ Ÿ�Կ��� void*�� ��ȯ�� �� �ڵ� ����ȯ
// void*���� �ٸ� ������ Ÿ������ ��ȯ�� �� ����ȯ ���


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