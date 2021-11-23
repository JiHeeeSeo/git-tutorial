#include "Header.h"

int main() {
	int* myArr;

	int input;
	fseek(stdin, 0, SEEK_END);
	printf("만들 배열의 크기를 입력하세요: ");
	scanf("%d", &input);

	myArr = (int*)malloc(sizeof(int) * input);

	for (int i = 0; i < input; i++) {
		myArr[i] = (i + 1) * 2;
		printf("myArr[%d] = %d\n", i, myArr[i]);
	}
	free(myArr);
	return 0;
}