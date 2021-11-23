#include <cstdio>


int main() {
	int i1, i2, op;
	int result = 1;

	scanf_s("%d %d %d", &i1, &i2, &op);


	if (op == 0)
		printf("%d\n", i1 + i2);
	else if (op == 1)
		printf("%d\n", i1 - i2);
	else if (op == 2) {
		for (int i = 1; i <= i2; i++)
			result = result * i1;
		printf("%d\n", result);
	}
	else
		printf("잘못된 숫자를 입력했습니다. 프로그램을 종료합니다.\n");
	return 0;
		
}