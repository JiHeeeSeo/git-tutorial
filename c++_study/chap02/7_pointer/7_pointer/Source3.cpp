// �Լ��� �Ķ������ ������
// �迭�� ��� �迭�� ������ �˷��ִ� ������ ���� �Ķ���ͷ� �ް� �ȴ�.

#include <cstdio>
#include <cstdlib>

void foo(int* a, int count) {
	for (int i = 0; i < count; i++)
		printf("%d\n", a[i]);
}

int main() {
	int myArray[5] = { 1,2,3,4,5 };
	foo(myArray, 5);

	return 0;
}