// 함수의 파라미터의 포인터
// 배열일 경우 배열의 갯수를 알려주는 변수를 따로 파라미터로 받게 된다.

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